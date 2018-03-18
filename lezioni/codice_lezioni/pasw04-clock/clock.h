class clock
{
public:
    void setTime(int hours, int minutes, int seconds);
    void getTime(int& hours, int& minutes, int& seconds) const;
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clock& otherClock) const;
    clock(int hours, int minutes, int seconds);
    clock();
private:
    int hr;  
    int min; 
    int sec; 
};
