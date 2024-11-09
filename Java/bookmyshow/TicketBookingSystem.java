package Java.bookmyshow;

import java.util.HashMap;
import java.util.Map;

class Seat {

    private final int seatNumber;
    private boolean reserved;

    // Constructor
    public Seat(int seatNumber) {
        this.seatNumber = seatNumber;
        this.reserved = false; // Initially, the seat is not reserved.
    }

    // Method to reserve the seat
    public boolean reserveSeat() {
        if (!this.reserved) {
            this.reserved = true;
            System.out.println("Seat " + seatNumber + " reserved.");
            return true;
        } else {
            System.out.println("Seat " + seatNumber + " is already reserved.");
            return false;
        }
    }

    // Method to keep the seat on hold
    public boolean holdSeat() {
        // here another user cannot reserve this same seat
        if (!this.reserved) {
            this.reserved = true;
            System.out.println("Seat " + seatNumber + " is on hold.");
            return true;
        } else {
            System.out.println("Seat " + seatNumber + " is already reserved.");
            return false;
        }
    }

    // Method to un-reserve the seat
    public boolean unreserveSeat() {
        if (this.reserved) {
            this.reserved = false;
            System.out.println("Seat " + seatNumber + " has been successfully un-reserved");
            return true;
        } else {
            System.out.println("Seat " + seatNumber + " is not currently reserved.");
            return false;
        }
    }

    // Method to check if the seat is reserved
    public boolean isReserved() {
        return reserved;
    }

    public int getSeatNumber() {
        return seatNumber;
    }
}

class SeatManager {

    private final Map<Integer, Seat> seats;

    // Constructor to initialize 20 seats
    public SeatManager(int numberOfSeats) {
        seats = new HashMap<>();
        for (int i = 1; i <= numberOfSeats; i++) {
            seats.put(i, new Seat(i));  // Creating seat objects for seat numbers 1 to 20
        }
    }

    // Method to reserve a seat by seat number
    public void allocateSeat(int seatNumber) {
        Seat seat = seats.get(seatNumber);
        if (seat != null) {
            // check if seat is reserved or not
            if (!seat.isReserved()) {
                seat.reserveSeat(); // allocate only if the seat is available
            } else {
                System.out.println("Seat number " + seatNumber + " is already reserved");
            }
        } else {
            System.out.println("Invalid seat number");
        }
    }

    public void unreserveSeat(int seatNumber) {
        Seat seat = seats.get(seatNumber);
        if (seat != null && seat.isReserved() == true) {
            seat.unreserveSeat();
        } else {
            System.out.println("Invalid seat number: " + seatNumber);
        }
    }

    // Method to check seat availability
    public boolean isSeatAvailable(int seatNumber) {
        Seat seat = seats.get(seatNumber);
        return seat != null && !seat.isReserved();
    }
}

public class TicketBookingSystem {

    public static void main(String[] args) {
        // Initialize the SeatManager with 20 seats
        SeatManager seatManager = new SeatManager(100);

        // Example bookings
        seatManager.allocateSeat(1);  // reserving seat 1
        seatManager.allocateSeat(5);  // Should reserve seat 5
        seatManager.allocateSeat(5);  // Should show seat 5 is already reserved
        seatManager.unreserveSeat(1);// Should un-reserve seat 1
        seatManager.allocateSeat(1);  // Should reserve seat 1

        // Checking availability of seat 5 (should be false since it's reserved)
        boolean isAvailable = seatManager.isSeatAvailable(5);
        System.out.println("Is seat 5 available? " + isAvailable);
    }
}
