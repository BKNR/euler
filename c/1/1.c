
int sum_div(int div1, int div2, int target) {
    int sum, i = 0;

    for (i = 1; i < target; i++) {
        if (i % div1 == 0) {
            sum += i;
        } else if (i % div2 == 0) {
            sum += i;
        }
    }
    return sum;
}
