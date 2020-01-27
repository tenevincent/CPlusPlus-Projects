#include <iostream>                // cout
#if 1 //#
#include "database.h"            // Einbinden der fremden Programmierschnittstelle
#endif //#
struct db_handle_t {}; //#
db_handle_t db_open(const char*); //#
void db_close(db_handle_t); //#
int db_execute(db_handle_t, const char*); //#
class Database {
	db_handle_t db_;               // eingepackte Ressource
public:
	Database(const char* filename);
	~Database();
	int execute(const char* query);
};
Database::Database(const char* filename)
	: db_{ db_open(filename) }       // Anfordern der Ressource
{ }
Database::~Database() {
	db_close(db_);                 // Freigeben der Ressource
}
int Database::execute(const char* query) {
	return db_execute(db_, query); // Nutzen der Ressource
}
int main() {
	Database db{ "kunden.dat" };   // Erzeugen des Wrappers
	std::cout << "Anzahl: " << db.execute("select * from kunden") << "\n";
	//= Anzahl: 5
}                                  // Automatisches Entfernen des Wrappers


