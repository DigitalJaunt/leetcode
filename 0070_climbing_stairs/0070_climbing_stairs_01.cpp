class Solution {
public:
    int climbStairs(int n) {
		double num = n + 1.0;
		// (1+sqrt(5)) / 2
        double firstTermBase = 1.618033988749894848204586834365638117720309179805762862135;
		// (1-sqrt(5)) / 2
		double secondTermBase = -0.61803398874989484820458683436563811772030917980576286213;
		double oneOverRootFive = 0.447213595499957939281834733746255247088123671922305144854;
		double fibonacci = oneOverRootFive * (pow(firstTermBase, num) - pow(secondTermBase, num));
		return int(fibonacci);
    }
};
