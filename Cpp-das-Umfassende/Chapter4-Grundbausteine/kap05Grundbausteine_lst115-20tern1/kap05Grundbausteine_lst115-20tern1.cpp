int main() {
    for (int w1 = 1; w1 <= 6; ++w1) { // 1..6
        for (int w2 = 0; w2 < 10; ++w2) { // 1..6
            int max = w1 > w2 ? w1 : w2;  // tern?rer Operator
            (void)max;//#
        }
    }
}

