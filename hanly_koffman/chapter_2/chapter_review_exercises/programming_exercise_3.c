/* Assignment: Write a program that predicts the score needed on a final exam to achieve a desired grade in 
 * a course. The program shold interact with the user as follows:
 * Enter desired grade> B
 * Enter minimum average required> 79.5
 * Enter current average in course> 74.6
 * Enter how much the final counts
 * as a percentage of the course grade> 25
 *
 * You need a score of 94.20 on the final to get a B.
 * 
 * Author: Maxwell Reilly
 * Date Finished: Thursday February 23, 2023.
 */

#include <stdio.h>

int main (void) {
    char desired_grade;
    double min_avg_req, cur_avg, final_weight;
    double fin_score;
    printf ("Enter desired letter grade>\n");
    scanf("%c", &desired_grade);
    printf("Enter minimum average required>\n");
    scanf("%lf", &min_avg_req);
    printf("Enter current average in course>\n");
    scanf("%lf", &cur_avg);
    printf("Enter how much the final counts \nas a percentage of the course grade>\n");
    scanf("%lf", &final_weight);
    min_avg_req = min_avg_req / 100;
    cur_avg = cur_avg / 100;
    final_weight = final_weight / 100;
    fin_score = (min_avg_req - (cur_avg * (1 - final_weight))) / final_weight;
    printf("You need a final score of %4.2f to get a %c in the course.\n", fin_score * 100, desired_grade);
    return (0);
}
