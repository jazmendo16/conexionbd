#include <mysql.h>
#include <string>

#include <iostream>

using namespace std;

// nuevo codigo para crear
// int q_estado;

int main() {
	MYSQL* conectar;

	conectar = mysql_init(0);
	conectar = mysql_real_connect(conectar, "localhost", "root", "123456789", "bd_empresa", 3306, NULL, 0);

	if (conectar) {

		cout << "Conexion Exitosa";


	}
	else {
		cout << "No fue posible conectar";
	}
}