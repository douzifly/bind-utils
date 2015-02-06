#!/bin/sh -e
#
# Copyright (C) 2004, 2006-2014  Internet Systems Consortium, Inc. ("ISC")
# Copyright (C) 2000-2003  Internet Software Consortium.
#
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted, provided that the above
# copyright notice and this permission notice appear in all copies.
#
# THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
# REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
# AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
# INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
# LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
# OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
# PERFORMANCE OF THIS SOFTWARE.

SYSTEMTESTTOP=../..
. $SYSTEMTESTTOP/conf.sh

zone=.
zonefile=root.db

keyname=`$KEYGEN -qfk -r $RANDFILE $zone`
zskkeyname=`$KEYGEN -q -r $RANDFILE $zone`

$SIGNER -Sg -r $RANDFILE -o $zone $zonefile > /dev/null 2>&-

# Configure the resolving server with a managed trusted key.
cat $keyname.key | grep -v '^; ' | $PERL -n -e '
local ($dn, $class, $type, $flags, $proto, $alg, @rest) = split;
local $key = join("", @rest);
print <<EOF
managed-keys {
    "$dn" initial-key $flags $proto $alg "$key";
};
EOF
' > managed.conf
cp managed.conf ../ns2/managed.conf

# Configure a trusted key statement (used by delve)
cat $keyname.key | grep -v '^; ' | $PERL -n -e '
local ($dn, $class, $type, $flags, $proto, $alg, @rest) = split;
local $key = join("", @rest);
print <<EOF
trusted-keys {
    "$dn" $flags $proto $alg "$key";
};
EOF
' > trusted.conf

#
#  Save keyname and keyid for managed key id test.
#
echo "$keyname" > managed.key
keyid=`expr $keyname : 'K\.+00.+\([0-9]*\)'`
keyid=`expr $keyid + 0`
echo "$keyid" > managed.key.id