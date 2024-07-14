#include <ModbusBaseServer.hpp>
#include <ModbusFrame.hpp>

int main(void)
{
	ModbusRtuServer server;
	server.data.writeCoil(0, 1);
	server.data.writeCoil(1, 0);
	server.data.writeCoil(2, 1);
	server.data.writeCoil(3, 0);
	server.data.writeCoil(4, 1);
	server.data.writeCoil(5, 0);
	server.data.writeCoil(6, 1);
	server.data.writeCoil(7, 0);

	std::array<uint8_t, 256> request = {6, 1, 0, 0, 0, 8, 0, 0};
	auto res = server.process(request);

	for (;;)
	{
	}
}
