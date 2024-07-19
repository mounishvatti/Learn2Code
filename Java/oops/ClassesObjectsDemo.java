package Java.oops;

public class ClassesObjectsDemo {
    static String college = "VIT";
    private int studentId;
    private String studentName;
    private int studentAge;

    public ClassesObjectsDemo(int studentId, String studentName, int studentAge) {
        this.studentId = studentId;
        this.studentName = studentName;
        this.studentAge = studentAge;
    }

    private void printStudentInfo() {
        System.out.println("Student Id: " + studentId);
        System.out.println("Student Name: " + studentName);
        System.out.println("Student Age: " + studentAge);
        System.out.println("College: " + college);
    }

    public int getStudentId() {
        return studentId;
    }

    public void setStudentId(int studentId) {
        this.studentId = studentId;
    }

    public String getStudentName() {
        return studentName;
    }

    public void setStudentName(String studentName) {
        this.studentName = studentName;
    }

    public int getStudentAge() {
        return studentAge;
    }

    public void setStudentAge(int studentAge) {
        this.studentAge = studentAge;
    }

    public static void generateToken(){
        System.out.println("Your token has been generated");
    }

    public static void main(String[] args) {
        ClassesObjectsDemo student1 = new ClassesObjectsDemo(1, "John", 20);
        ClassesObjectsDemo student2 = new ClassesObjectsDemo(2, "Jane", 21);
        ClassesObjectsDemo student3 = new ClassesObjectsDemo(3, "Tom", 22);

        student1.setStudentId(1);
        student1.setStudentName("John");
        student1.setStudentAge(20);

        student2.studentName = "Mounish";

        student1.printStudentInfo();
        student2.printStudentInfo();
        student3.printStudentInfo();

        generateToken();
    }
}
