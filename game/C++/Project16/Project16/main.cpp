#include <iostream>
#include <cstring>
#include "EmployeeHandler.h"
#include "TemporaryWorker.h"
#include "ForeignSalesWorker.h"

using namespace std;


//#define DEF_PERMANENT_WORKER
//#define DEF_TEMPORARY_WORKER
//#define DEF_SALES_WORKER
#define DEF_FOREIGN_SALES_WORKER

// ����: PermanentWorker -> TemporaryWorker -> SalesWorker -> ForeignSalesWorker
// Ŭ������ ������� �����϶�.

int main(void)
{
    // ���������� �������� ����� ��Ʈ�� Ŭ������ ��ü����
    EmployeeHandler handler;

#ifdef DEF_PERMANENT_WORKER
    // ������ ���
    handler.AddEmployee(new PermanentWorker("KIM", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1500));
    handler.AddEmployee(new PermanentWorker("JUN", 2000));
#endif // DEF_PERMANENT_WORKER

#ifdef DEF_TEMPORARY_WORKER
    // �ӽ��� ���
    TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
    alba->AddWorkTime(5);   // 5�ð� ���Ѱ�� ���
    handler.AddEmployee(alba);
#endif // DEF_TEMPORARY_WORKER

#ifdef DEF_SALES_WORKER
    // ������ ���
    SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
    seller->AddSalesResult(7000);   // �������� 7000
    handler.AddEmployee(seller);
#endif // DEF_SALES_WORKER

#ifdef DEF_FOREIGN_SALES_WORKER
    ForeignSalesWorker* fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
    fseller1->AddSalesResult(7000);
    handler.AddEmployee(fseller1);

    ForeignSalesWorker* fseller2 =
        new ForeignSalesWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
    fseller2->AddSalesResult(7000);
    handler.AddEmployee(fseller2);

    ForeignSalesWorker* fseller3 =
        new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);
    fseller3->AddSalesResult(7000);
    handler.AddEmployee(fseller3);

#endif // DEF_FOREIGN_SALES_WORKER

    // �̹� �޿� �����ؾ� �� �޿��� ����
    handler.ShowAllSalaryInfo();

    // �̹� �޿� �����ؾ� �� �޿��� ����
    handler.ShowTotalSalary();

    return 0;
}

/*
���� ���
name: KIM
salary: 1000

name: LEE
salary: 1500

name: JUN
salary: 2000

name: Jung
salary: 3500

name: Hong
salary: 1700

name: Hong
salary: 1700
risk pay: 510
sum: 2210

name: Yoon
salary: 1700
risk pay: 340
sum: 2040

name: Lee
salary: 1700
risk pay: 170
sum: 1870

salary sum: 15820

����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .

*/