#include <iostream>
#include <unordered_map>

class Seat
{
private:
    int seatNo;
    bool reserved;

public:
    Seat(int seatNo) : seatNo(seatNo), reserved(false) {}

    // Method to reserve the seat
    bool reserveSeat()
    {
        if (!reserved)
        {
            reserved = true;
            std::cout << "Seat " << seatNumber << " reserved." << std::endl;
            return true;
        }
        else
        {
            std::cout << "Seat " << seatNumber << " is already reserved." << std::endl;
            return false;
        }
    }

    // Method to unreserve the seat
    bool unreserveSeat()
    {
        if (reserved)
        {
            reserved = false;
            std::cout << "Seat " << seatNumber << " has been successfully unreserved." << std::endl;
            return true;
        }
        else
        {
            std::cout << "Seat " << seatNumber << " is not currently reserved." << std::endl;
            return false;
        }
    }

    bool isReserved() const
    {
        return this->reserved;
    }

    int getSeatNo() const
    {
        return this->seatNo;
    }
};

class SeatManager
{
private:
    std::unordered_map<int, Seat> seats;

public:
    SeatManager(int numberOfSeats)
    {
        for (int i = 1; i <= numberOfSeats; ++i)
        {
            seats.emplace(i, Seat(i)); // Creating seat objects for seat numbers
        }
    }

    void allocateSeat(int seatNumber)
    {
        if (seats.find(seatNumber) != seats.end())
        {
            Seat &seat = seats.at(seatNumber);
            if (!seat.isReserved())
            {
                seat.reserveSeat(); // Allocate the seat if available
            }
            else
            {
                std::cout << "Seat " << seatNumber << " is already reserved. Cannot allocate." << std::endl;
            }
        }
        else
        {
            std::cout << "Invalid seat number: " << seatNumber << std::endl;
        }
    }

    void unreserveSeat(int seatNumber)
    {
        if (seats.find(seatNumber) != seats.end())
        {
            seats.at(seatNumber).unreserveSeat();
        }
        else
        {
            std::cout << "Invalid seat number: " << seatNumber << std::endl;
        }
    }

    // Method to check seat availability
    bool isSeatAvailable(int seatNumber) const
    {
        auto it = seats.find(seatNumber);
        return it != seats.end() && !it->second.isReserved();
    }
};

int main()
{
    // Initialize the SeatManager with 20 seats
    SeatManager seatManager(20);

    // Example: Trying to allocate seats
    seatManager.allocateSeat(5);  // Should reserve seat 5
    seatManager.allocateSeat(5);  // Should show seat 5 is already reserved
    seatManager.allocateSeat(10); // Should reserve seat 10

    // Unreserve a seat
    seatManager.unreserveSeat(5); // Should unreserve seat 5
    seatManager.allocateSeat(5);  // Should reserve seat 5 again after unreserving

    // Trying to reserve an invalid seat
    seatManager.allocateSeat(21); // Should print invalid seat number

    return 0;
}
