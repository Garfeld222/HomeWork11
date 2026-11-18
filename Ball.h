#pragma once
#include <iostream>
#include <string>

using namespace std;

class AbstractBall {
protected:
    string* brand;
    string* color;
    double* radius;
    int* bounceCount;

public:
    AbstractBall();
    AbstractBall(string b, string c, double r, int bc);
    virtual ~AbstractBall();

    void setBrand(string b);
    string getBrand();

    void setColor(string c);
    string getColor();

    void setRadius(double r);
    double getRadius();

    void setBounceCount(int bc);
    int getBounceCount();

    virtual void play() = 0;
    virtual void showInfo();
};

class Football : public AbstractBall {
private:
    string* league;

public:
    Football();
    Football(string b, string c, double r, int bc, string l);
    ~Football() override;

    void setLeague(string l);
    string getLeague();

    void play() override;
    void showInfo() override;
};

class Basketball : public AbstractBall {
private:
    string* material;

public:
    Basketball();
    Basketball(string b, string c, double r, int bc, string m);
    ~Basketball() override;

    void setMaterial(string m);
    string getMaterial();

    void play() override;
    void showInfo() override;
};
