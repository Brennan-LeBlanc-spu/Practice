#include <iostream>

// Closest pair. Given n points in the plane, find a pair with smallest Euclideon distance between them.

/*Fundamental geometric primitive: Graphics, computer vison, geographic information systems, molecular modeling, air traffic control
- Special case of nearest neighbor, Euclideon MST, Voronoi
-Brute force. Check all pairs of points p and q with O(n^2) comparisons
-1-D version. O(nlogn) easy if point are on a line
-Assumption: No two points have the same x coordinate*/

/*Closest Pair of Points- First Attempt
Divide: Sub-divide region into 4 quadrants.
-Obstacle: Impossible to ensure n/4 points in each piece

Algorithm: Divide draw vertical line L so that roughtly 1/2n points on each side
-Conquer: find closest pair in each side recursively
-Combine: find closest pair with one point in each side
-Return best of 3 solutions
-Find closest pair with one point in each side, assuming that distanc < delta
-Observation: only need to consider points within delta of line L
-Sort points in 2delta-strip by their y coordinate
- Only check distances of those within 11 positions in sorted list!!
-Def: Let s be the point in the 2delta -strip with the ith smallest y -coordinate
-Claim: If |i-j| >= 12, then the distance between si and sj is at least delta
-O(nlogn): Sort them in the beginning, instead of sorting the strip everytime*/

int main()
{

}