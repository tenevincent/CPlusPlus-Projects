int main() {
    int a = 0;
    int b = 0;
    for (int w1 = 1; w1 <= 6; ++w1) { // 1..6
        for (int w2 = 0; w2 < 10; ++w2) { // 1..6
            int max = w1 > w2 ? (a += b, w1) : (b += 1, w2); // Sequenzoperator
            (void)max;//#
        }
    }
}

