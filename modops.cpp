namespace MD {
    
    const int MOD = 1000000007;

    inline void add(int& a, int b) {
        a += b;
        if (a >= MOD) {
            a -= MOD;
        }
    }

    inline void sub(int& a, int b) {
        a -= b;
        if (a < 0) {
            a += MOD;
        }
    }

    inline int mul(int a, int b) {
        return a * 1LL * b % MOD;
    }

};
