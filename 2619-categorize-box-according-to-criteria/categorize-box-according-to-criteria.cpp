class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool Bulky = 0, Heavy = 0;
        long long volume = 1LL * length * width * height;
        if(mass >= 100) Heavy = true;
        if(length >= 10000 || width >= 10000 || height >= 10000 
        || volume >= 1000000000LL) Bulky = true;
        if(Bulky && Heavy) return "Both";
        if(!Bulky && !Heavy) return "Neither";
        if(Bulky && !Heavy) return "Bulky";
        return "Heavy";
    }
};