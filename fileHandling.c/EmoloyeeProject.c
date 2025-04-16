#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "employees.txt"

typedef struct {
    int id;
    char name[100];
    char department[50];
    char designation[50];
    float salary;
    char contact[15];
} Employee;

void addEmployee();
void viewAllEmployees();
void searchEmployee();
void updateEmployee();
void deleteEmployee();
void manageSalary();
void generateReport();
void sortEmployees();
void exitProgram();
void sortById(Employee* employees, int count);
void sortByName(Employee* employees, int count);
void sortBySalary(Employee* employees, int count);

int main() {
    int choice;

    while (1) {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. View All Employees\n");
        printf("3. Search Employee by ID/Name/Department\n");
        printf("4. Update Employee Details\n");
        printf("5. Delete Employee\n");
        printf("6. Manage Employee Salaries\n");
        printf("7. Generate Reports\n");
        printf("8. Sort Employees\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: viewAllEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: updateEmployee(); break;
            case 5: deleteEmployee(); break;
            case 6: manageSalary(); break;
            case 7: generateReport(); break;
            case 8: sortEmployees(); break;
            case 9: exitProgram(); return 0;
            default: printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}
void addEmployee() {
    Employee emp;
    FILE *file = fopen(FILENAME, "ab");

    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    getchar();

    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = 0;

    printf("Enter Department: ");
    fgets(emp.department, sizeof(emp.department), stdin);
    emp.department[strcspn(emp.department, "\n")] = 0;

    printf("Enter Designation: ");
    fgets(emp.designation, sizeof(emp.designation), stdin);
    emp.designation[strcspn(emp.designation, "\n")] = 0;

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);
    getchar();

    printf("Enter Contact Details: ");
    fgets(emp.contact, sizeof(emp.contact), stdin);
    emp.contact[strcspn(emp.contact, "\n")] = 0;

    fwrite(&emp, sizeof(Employee), 1, file);
    fclose(file);
    printf("Employee added successfully.\n");
}
void viewAllEmployees() {
    Employee emp;
    FILE *file = fopen(FILENAME, "rb");

    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    printf("ID\tName\tDepartment\tDesignation\tSalary\tContact\n");
    printf("----------------------------------------------------------\n");

    while (fread(&emp, sizeof(Employee), 1, file)) {
        printf("%d\t%s\t%s\t%s\t%.2f\t%s\n", emp.id, emp.name, emp.department, emp.designation, emp.salary, emp.contact);
    }

    fclose(file);
}
void searchEmployee() {
    int choice;
    Employee emp;
    FILE *file = fopen(FILENAME, "rb");

    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    printf("Search by:\n1. ID\n2. Name\n3. Department\nEnter choice: ");
    scanf("%d", &choice);
    getchar(); 

    switch (choice) {
        case 1:
            {
                int id;
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                while (fread(&emp, sizeof(Employee), 1, file)) {
                    if (emp.id == id) {
                        printf("Employee Found: %d\t%s\t%s\t%s\t%.2f\t%s\n", emp.id, emp.name, emp.department, emp.designation, emp.salary, emp.contact);
                        fclose(file);
                        return;
                    }
                }
                printf("Employee with ID %d not found.\n", id);
                break;
            }
        case 2:
            {
                char name[100];
                printf("Enter Employee Name to search: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;

                while (fread(&emp, sizeof(Employee), 1, file)) {
                    if (strstr(emp.name, name)) {
                        printf("Employee Found: %d\t%s\t%s\t%s\t%.2f\t%s\n", emp.id, emp.name, emp.department, emp.designation, emp.salary, emp.contact);
                        fclose(file);
                        return;
                    }
                }
                printf("Employee with name %s not found.\n", name);
                break;
            }
        case 3:
            {
                char dept[50];
                printf("Enter Department to search: ");
                fgets(dept, sizeof(dept), stdin);
                dept[strcspn(dept, "\n")] = 0;

                while (fread(&emp, sizeof(Employee), 1, file)) {
                    if (strstr(emp.department, dept)) {
                        printf("Employee Found: %d\t%s\t%s\t%s\t%.2f\t%s\n", emp.id, emp.name, emp.department, emp.designation, emp.salary, emp.contact);
                        fclose(file);
                        return;
                    }
                }
                printf("Employee from department %s not found.\n", dept);
                break;
            }
        default:
            printf("Invalid choice.\n");
    }

    fclose(file);
}
void updateEmployee() {
    int id;
    Employee emp;
    FILE *file = fopen(FILENAME, "rb+");

    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter Employee ID to update: ");
    scanf("%d", &id);

    while (fread(&emp, sizeof(Employee), 1, file)) {
        if (emp.id == id) {
            printf("Updating Employee: %d\t%s\n", emp.id, emp.name);

            printf("Enter new Designation: ");
            getchar();  // Consume newline
            fgets(emp.designation, sizeof(emp.designation), stdin);
            emp.designation[strcspn(emp.designation, "\n")] = 0;

            printf("Enter new Salary: ");
            scanf("%f", &emp.salary);
            getchar();

            printf("Enter new Contact: ");
            fgets(emp.contact, sizeof(emp.contact), stdin);
            emp.contact[strcspn(emp.contact, "\n")] = 0;

            fseek(file, -sizeof(Employee), SEEK_CUR);
            fwrite(&emp, sizeof(Employee), 1, file);
            printf("Employee updated successfully.\n");
            fclose(file);
            return;
        }
    }

    printf("Employee not found.\n");
    fclose(file);
}
void deleteEmployee() {
    int id;
    Employee emp;
    FILE *file = fopen(FILENAME, "rb");
    FILE *tempFile = fopen("temp.dat", "wb");

    if (!file || !tempFile) {
        printf("Error opening files.\n");
        return;
    }

    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);

    int found = 0;
    while (fread(&emp, sizeof(Employee), 1, file)) {
        if (emp.id != id) {
            fwrite(&emp, sizeof(Employee), 1, tempFile);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    if (found) {
        remove(FILENAME);
        rename("temp.dat", FILENAME);
        printf("Employee deleted successfully.\n");
    } else {
        printf("Employee with ID %d not found.\n", id);
    }
}
void manageSalary() {
    int id;
    float salary;
    Employee emp;
    FILE *file = fopen(FILENAME, "rb+");

    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter Employee ID to manage salary: ");
    scanf("%d", &id);

    while (fread(&emp, sizeof(Employee), 1, file)) {
        if (emp.id == id) {
            printf("Current Salary: %.2f\n", emp.salary);
            printf("Enter new Salary: ");
            scanf("%f", &salary);

            emp.salary = salary;
            fseek(file, -sizeof(Employee), SEEK_CUR);
            fwrite(&emp, sizeof(Employee), 1, file);
            printf("Salary updated successfully.\n");
            fclose(file);
            return;
        }
    }

    printf("Employee with ID %d not found.\n", id);
    fclose(file);
}
void generateReport() {
    printf("Reports feature under construction.\n");
}
void sortEmployees() {
    int choice;
    Employee emp;
    FILE *file = fopen(FILENAME, "rb");

    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    int count = size / sizeof(Employee);
    Employee *employees = malloc(size);

    fseek(file, 0, SEEK_SET);
    fread(employees, sizeof(Employee), count, file);
    fclose(file);

    printf("Sort by:\n1. ID\n2. Name\n3. Salary\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: sortById(employees, count); break;
        case 2: sortByName(employees, count); break;
        case 3: sortBySalary(employees, count); break;
        default: printf("Invalid choice.\n"); break;
    }

    free(employees);
}
void sortById(Employee* employees, int count) {
    Employee temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (employees[i].id > employees[j].id) {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }

    printf("Employees sorted by ID:\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%s\t%s\t%.2f\t%s\n", employees[i].id, employees[i].name, employees[i].department, employees[i].designation, employees[i].salary, employees[i].contact);
    }
}
void sortByName(Employee* employees, int count) {
    Employee temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(employees[i].name, employees[j].name) > 0) {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }

    printf("Employees sorted by Name:\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%s\t%s\t%.2f\t%s\n", employees[i].id, employees[i].name, employees[i].department, employees[i].designation, employees[i].salary, employees[i].contact);
    }
}
void sortBySalary(Employee* employees, int count) {
    Employee temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (employees[i].salary > employees[j].salary) {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }

    printf("Employees sorted by Salary:\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%s\t%s\t%.2f\t%s\n", employees[i].id, employees[i].name, employees[i].department, employees[i].designation, employees[i].salary, employees[i].contact);
    }
}

void exitProgram() {
    printf("Exiting the system. Goodbye!\n");
    exit(0);
}
