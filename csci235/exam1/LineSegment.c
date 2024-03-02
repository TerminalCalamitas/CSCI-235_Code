/* The reason we have a close_enough() method is because when doing math with doubles,
 *   the output might be slightly differ from what the expected outcome is. For example, .1 + .2 might equal
 *     .300000001 so .1 + .2 == .3 would return false since they are different values.
 * We have a HOW_CLOSE constant in order to define how close the real outcome needs to be in relation to the
 *   expected outcome.
*/
#include "Point.h"
#include "LineSegment.h"

double length(LineSegment l) {
    return distance(l.p1, l.p2);
}

double slope (LineSegment l) {
    double rise = l.p2.y - l.p1.y;
    double run = l.p2.x - l.p1.x;
    double slope = rise / run;

    return slope;
}
