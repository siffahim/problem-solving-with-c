#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int i = 0;

    while (i<t)
    {
        int m1_farmers, m2_farmers, days;
        scanf("%d %d %d", &m1_farmers, &m2_farmers, &days);

        int total_farmers = m1_farmers + m2_farmers;

        int result = (m1_farmers * days) / total_farmers;

        int days_will_reduce = days - result;

        printf("%d\n", days_will_reduce);

        i++;
    }
    

    return 0;
}