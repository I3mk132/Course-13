#pragma once
#include <iostream>
#include <queue>
#include <stack>
#include "clsDate.h"


using namespace std;

class clsQueueLine {
private:
    string _prefix;
    int _totalTickets = 0;
    short _serveTime;

    static string Tabs(short t){
        string T;
        for (short i = 0; i < t; i++){
            T += '\t';
        }
        return T;
    }

    class clsTicket {
    public:

        string date = clsDate::GetSystemDateTimeString();
        int TimeToServe;
        int WaitingClients;
        string TicketCode;

        clsTicket(string Prefix, int TotalTickets, int WaitingClients, int ServingTime){
            TimeToServe = ServingTime * TotalTickets;
            this->WaitingClients = WaitingClients;
            TicketCode = Prefix + to_string(TotalTickets);
        }

        void PrintTicket(){
            cout << Tabs(4) << "=========================================\n";
            cout << Tabs(6) << TicketCode << "\n\n";
            cout << Tabs(5) << date << "\n";
            cout << Tabs(5) << "Waiting Clients = " << WaitingClients << "\n";
            cout << Tabs(5) << "  Serve Time in " << "\n";
            cout << Tabs(5) << "    " << TimeToServe << " Minutes. \n";
            cout << Tabs(4) << "=========================================\n";
        }
    };

    queue<clsTicket> Queue;

public:
    clsQueueLine(string Prefix = "A0", int ServeTime = 5){
        _prefix = Prefix;
        _serveTime = ServeTime;
    }

    void IssueTicket(){
        _totalTickets++;
        clsTicket Ticket(_prefix, _totalTickets, WaitingClients(), _serveTime);
        Queue.push(Ticket);
    }

    int WaitingClients(){
        return Queue.size();
    }

    string WhoIsNext(){
        if (Queue.empty()){
            return "No Clients Left.";
        }
        else {
            return Queue.front().TicketCode;
        }
    }

    void PrintInfo(){
        cout << "\n" << Tabs(4);
        cout << "=========================================";
        cout << "\n" << Tabs(6);
        cout << "Queue Info";
        cout << "\n" << Tabs(4);
        cout << "========================================";
        cout << "\n\n" << Tabs(5);
        cout << "Prefix          = " << _prefix;
        cout << "\n" << Tabs(5);
        cout << "Total Tickets   = " << _totalTickets;
        cout << "\n" << Tabs(5);
        cout << "Served Clients  = " << ServedClients();
        cout << "\n" << Tabs(5);
        cout << "Waiting Clients = " << Queue.size();
        cout << "\n" << Tabs(4);
        cout << "========================================";
        cout << "\n";
    }

    void PrintTicketsLineRTL(){
        string L = " <-- ";
        queue<clsTicket> Copy = Queue;
        cout << "\n\n" <<  Tabs(4);
        cout << "Tickets:  ";
        for (int i = 0; i < _totalTickets; i++){
            cout << Copy.front().TicketCode << L;
            Copy.pop();

        }
    }
    void PrintTicketsLineLTR(){
        string L = " --> ";
        queue<clsTicket> Copy = Queue;
        stack<clsTicket> Copy2;

        while (!Copy.empty()){
            Copy2.push(Copy.front());
            Copy.pop();
        }

        cout << "\n\n" <<  Tabs(4);
        cout << "Tickets:  ";
        for (int i = 0; i < _totalTickets; i++){
            cout << Copy2.top().TicketCode << L;
            Copy2.pop();
        }
    }

    void PrintAllTickets(){
        queue<clsTicket> tkt = Queue;
        short size = tkt.size();
        cout << endl << endl;
        cout << Tabs(4) << "\t---Tickets---\n";

        if (Queue.empty())
            cout << Tabs(4) << "\t---NO Tickets---\n";
        for (short i = 0; i < size; i++){
            tkt.front().PrintTicket();
            tkt.pop();
        }
    }

    bool ServeNextClient(){
        if (Queue.empty())
            return false;
        Queue.pop();
        return true;
    }

    short ServedClients(){
        return _totalTickets - WaitingClients();
    }


};