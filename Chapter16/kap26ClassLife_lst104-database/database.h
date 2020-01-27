#ifndef DATABASE_HPP
#define DATABASE_HPP
typedef void* db_handle_t;
db_handle_t db_open(const char* filename);
void db_close(db_handle_t db);
int db_execute(db_handle_t db, const char* query);
#ifndef KEINE_DEFININITIONEN //#
db_handle_t db_open(const char* filename) { (void)filename; return nullptr; } //#
void db_close(db_handle_t db) { (void)db; } //#
int db_execute(db_handle_t db, const char* query) { (void)db; (void)query; return 5; } //#
#endif //#
#endif
