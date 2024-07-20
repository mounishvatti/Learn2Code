package Java.oops;

public class App {
    public static void main(String[] args) {
        Student s1 = new Student(1, "Mounish", 22);
        s1.printStudentInfo();

        Teacher t1 = new Teacher();
        t1.deliverClasses();
        t1.giveAttendance();

        Staff st1 = new Staff();
        st1.depositSalary();
        st1.giveAttendance();
    }
}
