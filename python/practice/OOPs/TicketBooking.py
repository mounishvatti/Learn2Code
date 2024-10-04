class Seat:
    def __init__(self, seat_number):
        self.seat_number = seat_number
        self.reserved = False  # Initially, the seat is not reserved.

    # Method to reserve the seat
    def reserve_seat(self):
        if not self.reserved:
            self.reserved = True
            print(f"Seat {self.seat_number} reserved.")
            return True
        else:
            print(f"Seat {self.seat_number} is already reserved.")
            return False

    # Method to unreserve the seat
    def unreserve_seat(self):
        if self.reserved:
            self.reserved = False
            print(f"Seat {self.seat_number} has been successfully unreserved.")
            return True
        else:
            print(f"Seat {self.seat_number} is not currently reserved.")
            return False

    # Method to check if the seat is reserved
    def is_reserved(self):
        return self.reserved


class SeatManager:
    def __init__(self, number_of_seats):
        self.seats = {i: Seat(i) for i in range(1, number_of_seats + 1)}  # Creating seat objects

    # Method to allocate a seat only if it is available
    def allocate_seat(self, seat_number):
        seat = self.seats.get(seat_number)
        if seat:
            if not seat.is_reserved():
                seat.reserve_seat()  # Allocate the seat if available
            else:
                print(f"Seat {seat_number} is already reserved. Cannot allocate.")
        else:
            print(f"Invalid seat number: {seat_number}")

    # Method to unreserve a seat by seat number
    def unreserve_seat(self, seat_number):
        seat = self.seats.get(seat_number)
        if seat:
            seat.unreserve_seat()
        else:
            print(f"Invalid seat number: {seat_number}")

    # Method to check seat availability
    def is_seat_available(self, seat_number):
        seat = self.seats.get(seat_number)
        return seat is not None and not seat.is_reserved()


# Example usage
if __name__ == "__main__":
    # Initialize the SeatManager with 20 seats
    seat_manager = SeatManager(20)

    # Example: Trying to allocate seats
    seat_manager.allocate_seat(5)  # Should reserve seat 5
    seat_manager.allocate_seat(5)  # Should show seat 5 is already reserved
    seat_manager.allocate_seat(10)  # Should reserve seat 10

    # Unreserve a seat
    seat_manager.unreserve_seat(5)  # Should unreserve seat 5
    seat_manager.allocate_seat(5)  # Should reserve seat 5 again after unreserving

    # Trying to reserve an invalid seat
    seat_manager.allocate_seat(21)  # Should print invalid seat number
