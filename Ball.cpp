#include "Ball.h"

AbstractBall::AbstractBall() {
    cout << "[AbstractBall] Default Constructor" << endl;
    brand = new string("Unknown");
    color = new string("White");
    radius = new double(10.0);
    bounceCount = new int(0);
}

AbstractBall::AbstractBall(string b, string c, double r, int bc) {
    cout << "[AbstractBall] Parametric Constructor" << endl;
    brand = new string(b);
    color = new string(c);
    radius = new double(r);
    bounceCount = new int(bc);
}

AbstractBall::~AbstractBall() {
    cout << "[AbstractBall] Destructor" << endl;
    delete brand;
    delete color;
    delete radius;
    delete bounceCount;
}

void AbstractBall::setBrand(string b) { *brand = b; }
string AbstractBall::getBrand() { return *brand; }

void AbstractBall::setColor(string c) { *color = c; }
string AbstractBall::getColor() { return *color; }

void AbstractBall::setRadius(double r) { *radius = r; }
double AbstractBall::getRadius() { return *radius; }

void AbstractBall::setBounceCount(int bc) { *bounceCount = bc; }
int AbstractBall::getBounceCount() { return *bounceCount; }

void AbstractBall::showInfo() {
    cout << "Ball: " << *brand << ", Color: " << *color
        << ", Radius: " << *radius << ", Bounces: " << *bounceCount << endl;
}


Football::Football() : AbstractBall("Nike", "Black/White", 11.0, 0) {
    cout << "[Football] Default Constructor" << endl;
    league = new string("FIFA");
}

Football::Football(string b, string c, double r, int bc, string l) : AbstractBall(b, c, r, bc) {
    cout << "[Football] Parametric Constructor" << endl;
    league = new string(l);
}

Football::~Football() {
    cout << "[Football] Destructor" << endl;
    delete league;
}

void Football::setLeague(string l) { *league = l; }
string Football::getLeague() { return *league; }

void Football::play() {
    (*bounceCount)++;
    cout << "The football " << *brand << " was kicked! Goal! Current bounces: " << *bounceCount << endl;
}

void Football::showInfo() {
    AbstractBall::showInfo();
    cout << "Football league: " << *league << endl;
}


Basketball::Basketball() : AbstractBall("Spalding", "Orange", 12.0, 0) {
    cout << "[Basketball] Default Constructor" << endl;
    material = new string("Leather");
}

Basketball::Basketball(string b, string c, double r, int bc, string m) : AbstractBall(b, c, r, bc) {
    cout << "[Basketball] Parametric Constructor" << endl;
    material = new string(m);
}

Basketball::~Basketball() {
    cout << "[Basketball] Destructor" << endl;
    delete material;
}

void Basketball::setMaterial(string m) { *material = m; }
string Basketball::getMaterial() { return *material; }

void Basketball::play() {
    (*bounceCount) += 2;
    cout << "Dribbling the basketball " << *brand << " on the floor! Current bounces: " << *bounceCount << endl;
}

void Basketball::showInfo() {
    AbstractBall::showInfo();
    cout << "Basketball material: " << *material << endl;
}
