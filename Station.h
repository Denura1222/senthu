
#include "CSquare.h"

using namespace std;

class Station : public CSquare {
private:
    string owner;
    const int cost = 200;
    const int ticketPrice = 10;

public:
    Station(int squareType, const string& squareName);

    const string& getOwner() const override;

    void setOwner(const string& owner) override;

    int getCost() const override;

    int getRent() const override;
};

