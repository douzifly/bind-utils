/*
 * Copyright (C) 1998  Internet Software Consortium.
 * 
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS" AND INTERNET SOFTWARE CONSORTIUM DISCLAIMS
 * ALL WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL INTERNET SOFTWARE
 * CONSORTIUM BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
 * ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
 * SOFTWARE.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <isc/assertions.h>
#include <isc/result.h>
#include <isc/symtab.h>

isc_mem_t *mctx;
isc_symtab_t *st;

int
main(int argc, char *argv[]) {
	char s[1000], *cp, *key;
	size_t len;
	isc_result_t result;
	isc_symvalue_t value;
	int trace = 0;
	int c;

	INSIST(isc_mem_create(0, 0, &mctx) == ISC_R_SUCCESS);
	INSIST(isc_symtab_create(mctx, 691, &st) == ISC_R_SUCCESS);

	while ((c = getopt(argc, argv, "t")) != -1) {
		switch (c) {
		case 't':
			trace = 1;
			break;
		}
	}

	while (gets(s) != NULL) {
		len = strlen(s);

		cp = s;

		if (cp[0] == '!') {
			cp++;
			result = isc_symtab_undefine(st, cp, 0);
			if (trace || result != ISC_R_SUCCESS)
				printf("undefine('%s'): %s\n", cp,
				       isc_result_totext(result));
		} else {
			key = cp;
			while (*cp != '\0' && *cp != ' ' && *cp != '\t')
				cp++;
			if (*cp == '\0') {
				result = isc_symtab_lookup(st, key, 0, &value);
				if (trace || result != ISC_R_SUCCESS) {
					printf("lookup('%s'): %s", key,
					       isc_result_totext(result));
					if (result == ISC_R_SUCCESS) {
						cp = value.as_pointer;
						printf(", value == '%s'", cp);
					}
					printf("\n");
				}
			} else {
				*cp++ = '\0';
				key = strdup(key);
				value.as_pointer = strdup(cp);
				result = isc_symtab_define(st, key, 0, value);
				if (trace || result != ISC_R_SUCCESS)
					printf("define('%s', '%s'): %s\n",
					       key, cp,
					       isc_result_totext(result));
			}
		}
	}

	isc_symtab_destroy(&st);
	isc_mem_stats(mctx, stdout);
	isc_mem_destroy(&mctx);

	return (0);
}
