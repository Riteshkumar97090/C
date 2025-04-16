#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[20];
    int age;
    char course[20];
    char enrollmentStatus[20];
} Student;

Student students[50];
int sc = 0;

void addStudent() {
    printf("\nEnter The Student Id: ");
    scanf("%d", &students[sc].id);
    getchar();

    printf("Enter The Student Name: ");
    fgets(students[sc].name,20, stdin);
    students[sc].name[strcspn(students[sc].name, "\n")] = '\0';

    printf("Enter The Student Age: ");
    scanf("%d", &students[sc].age);
    getchar();

    printf("Enter The Course: ");
    fgets(students[sc].course,20, stdin);
    students[sc].course[strcspn(students[sc].course, "\n")] = '\0';

    printf("Enter Enrollment Status (Enrolled or Withdrawn): ");
    fgets(students[sc].enrollmentStatus,20, stdin);
    students[sc].enrollmentStatus[strcspn(students[sc].enrollmentStatus, "\n")] = '\0';

    FILE* f = fopen("student.txt","a");
    fprintf(f,"%d,%s,%d,%s,%s\n",students[sc].id,students[sc].name,students[sc].age,
    students[sc].course,students[sc].enrollmentStatus);

    sc++;
    printf("Student add successful\n");
    fclose(f);
    return ;
}

void viewStudents() {  
    printf("+---------------------------------------------------------------+\n");
    printf("| %-4s | %-15s | %-4s | %-4s | %-6s | %-5s | \n", "No", "Name", "ID", "Age", "Course", "Status");
    printf("+---------------------------------------------------------------+\n");

    for (int i = 0; i < sc; i++) {        
        printf("| %-4d | %-15s | %-4d | %-4d | %-6s | %-5s |\n", 
               i + 1, 
               students[i].name, 
               students[i].id, 
               students[i].age,
               students[i].course,
               students[i].enrollmentStatus);
    }

    printf("+---------------------------------------------------------------+\n");
}

void searchStudentByID() {
    int searchId;
    printf("\nEnter Student id to Search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < sc; i++) {
        if (students[i].id == searchId) {
            printf("\nStudent found\n");
            printf("Id: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Course: %s\n", students[i].course);
            printf("Enrollment Status: %s\n", students[i].enrollmentStatus);
            return;
        }
    }
    printf("Student Id %d not found.\n", searchId);
}
void updateStudentDetails() {
    int updateId;
    printf("\nEnter id to update: ");
    scanf("%d", &updateId);
    getchar();
 int found = 0;
    for (int i = 0; i < sc; i++) {
    
        if (students[i].id == updateId) {
            printf("\nStudent found:\n");
            printf("ID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Course: %s\n", students[i].course);
            printf("Enrollment Status: %s\n", students[i].enrollmentStatus);
            printf("\nEnter new details for student:\n");
            printf("Enter new ID: ");
            scanf("%d", &students[i].id);
            printf("Enter new Name: ");
            getchar();
            fgets(students[i].name,20, stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0';
            printf("Enter new Age: ");
            scanf("%d", &students[i].age);
            printf("Enter new Course: ");
            getchar();
            fgets(students[i].course,20, stdin);
            students[i].course[strcspn(students[i].course, "\n")] = '\0';
            printf("Enter new Enrollment Status: ");
            getchar();
            fgets(students[i].enrollmentStatus,20, stdin);
            students[i].enrollmentStatus[strcspn(students[i].enrollmentStatus, "\n")] = '\0';
            printf("\nStudent detail update successfully.\n");
            found = 1;
        }
    }
    if(found==0){
    printf("Student Id %d not found.\n", updateId);
    }
    else {
       FILE* f = fopen("student.txt","w");
       for(int i=0; i < sc ; i++){
        fprintf(f,"%d,%s,%d,%s,%s\n",students[i].id,students[i].name,students[i].age,
    students[i].course,students[i].enrollmentStatus);
       }
       fclose(f);
    }
}
void deleteStudentRecord() {
    int deleteId;
    printf("\nEnter Student id delete: ");
    scanf("%d", &deleteId);
    int found = 0;

    for (int i = 0; i < sc; i++) {
        if (students[i].id == deleteId) {
            for (int j = i; j < sc - 1; j++) {
                students[j] = students[j + 1];
            }
            sc--; 
            found = 1;
            printf("Student Id %d deleted:\n", deleteId);
        }
    }
    if(found==0){
    printf("Student Id %d not found.\n", deleteId);
    }
    else {
       FILE* f = fopen("student.txt","w");
       for(int i=0; i < sc ; i++){
        fprintf(f,"%d,%s,%d,%s,%s\n",students[i].id,students[i].name,students[i].age,
    students[i].course,students[i].enrollmentStatus);
       }
       fclose(f);
    }
}
void markEnrollmentStatus() {
    int studentId;
    printf("\nEnter Student Id enrollment status: ");
    scanf("%d", &studentId);
    int found = 0;
    getchar();
    for (int i = 0; i < sc; i++) {
        if (students[i].id == studentId) {
            printf("\nStudent found: %s\n", students[i].name);
            printf("Current Enrollment Status: %s\n", students[i].enrollmentStatus);
            printf("\nEnter new Enrollment Status: ");
            fgets(students[i].enrollmentStatus,20, stdin);
            students[i].enrollmentStatus[strcspn(students[i].enrollmentStatus, "\n")] = '\0';
            printf("Enrollment status update successful\n");
            found = 1;
        }
    }   
    if(found==0){
    printf("Student ID %d not found.\n", studentId);
    }
    else {
       FILE* f = fopen("student.txt","w");
       for(int i=0; i < sc ; i++){
        fprintf(f,"%d,%s,%d,%s,%s\n",students[i].id,students[i].name,students[i].age,
    students[i].course,students[i].enrollmentStatus);
       }
       fclose(f);
    }
}
int main() {

    FILE* f = fopen("student.txt","r");

    if(f != NULL){
        char data[100];
        while(fgets(data,sizeof(data),f)){
        sscanf(data,"%d,%[^,],%d,%[^,],%[^,]",&students[sc].id,students[sc].name,&students[sc].age,students[sc].course,students[sc].enrollmentStatus);
        students[sc].enrollmentStatus[strcspn(students[sc].enrollmentStatus, "\n")] = '\0';
            sc++;
        }
    }
    fclose(f);

    int choice;
    do {
        printf("\n------ Student Management System ------\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Update Student Details\n");
        printf("5. Delete Student Record\n");
        printf("6. Mark Enrollment Status\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                searchStudentByID();  
                break;
            case 4:
                updateStudentDetails();
                break;
            case 5:
                deleteStudentRecord();
                break;
            case 6:
                markEnrollmentStatus();
                break;
            case 7:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (1);

  return 0;
}