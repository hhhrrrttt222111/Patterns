# Perl print wave
#
#*       * *       * *       * *       * *       * *       * *       * *       * *       * *       * *       * *       *
# *     *   *     *   *     *   *     *   *     *   *     *   *     *   *     *   *     *   *     *   *     *   *     *
#  *   *     *   *     *   *     *   *     *   *     *   *     *   *     *   *     *   *     *   *     *   *     *   *
#   * *       * *       * *       * *       * *       * *       * *       * *       * *       * *       * *       * *

our $repeat = 24;
our $max    = 7;
my $inc = 1;

print_line( ( -2 * $inc ) + $max + 2, $inc - 1 );
$inc++;
print_line( ( -2 * $inc ) + $max + 2, $inc - 1 );
$inc++;
print_line( ( -2 * $inc ) + $max + 2, $inc - 1 );
$inc++;
print_line( ( -2 * $inc ) + $max + 2, $inc - 1 );
$inc++;

sub print_line
{

    my $spaces_o = shift;
    $spaces_e = $max - $spaces_o + 1;
    my $start = shift;

    print " " x $start;

    for ( $x = 1; $x <= $repeat; $x++ )

    {

        my $is_even = $x % 2;
        if ( $is_even == 0 )
        {
            print "*" . " " x $spaces_e;

        }
        else
        {
            print "*" . " " x $spaces_o;

        }

    }
    print "\n";

}

