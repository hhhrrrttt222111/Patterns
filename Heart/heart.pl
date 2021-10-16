
# Converted heart.cpp to heart.pl
#   AAAAA     AAAAA
#  AAAAAAA   AAAAAAA
# AAAAAAAAA AAAAAAAAA
# BBBBBBBBBBBBBBBBBBB
#  BBBBBBBBBBBBBBBBB
#   BBBBBBBBBBBBBBB
#    BBBBBBBBBBBBB
#     BBBBBBBBBBB
#      BBBBBBBBB
#       BBBBBBB
#        BBBBB
#         BBB
#          B
  

$size = 10;

# FOR THE APEX OF HEART
for ( $a = $size / 2; $a <= $size; $a = $a + 2 )
{
    for ( $b = 1; $b < $size - $a; $b = $b + 2 ) { print " "; }
    for ( $b = 1; $b <= $a; $b++ )               { print "A"; }
    for ( $b = 1; $b <= $size - $a; $b++ )       { print " "; }
    for ( $b = 1; $b <= $a; $b++ )               { print "A"; }
    print "\n";
}

#  FOR THE BASE OF HEART ie. THE INVERTED TRIANGLE
for ( $a = $size; $a >= 0; $a-- )
{
    for ( $b = $a; $b < $size; $b++ )              { print " "; }
    for ( $b = 1; $b <= ( ( $a * 2 ) - 1 ); $b++ ) { print "B"; }
    print "\n";
}

