#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double x[10], y[10], sum = 0.0;

    scanf("%d", &n);

    if (n == 1) {
        double x1, y1;
        scanf("%lf %lf", &x1, &y1);
        printf("0.00\n");
    }
    else if (n == 2) {
        double x1, y1, x2, y2;
        scanf("%lf %lf", &x1, &y1);
        scanf("%lf %lf", &x2, &y2);
        sum = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        printf("%.2lf\n", sum);
    }
    else if (n > 2) {
        for (i = 0; i < n; i++) {
            scanf("%lf %lf", &x[i], &y[i]);
        }

        for (i = 0; i < n - 1; i++) {
            sum += sqrt((x[i + 1] - x[i]) * (x[i + 1] - x[i]) + (y[i + 1] - y[i]) * (y[i + 1] - y[i]));
        }

        sum += sqrt((x[0] - x[n - 1]) * (x[0] - x[n - 1]) + (y[0] - y[n - 1]) * (y[0] - y[n - 1]));

        printf("%.2lf\n", sum);
    }

    return 0;
}
