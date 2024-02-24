#include <ModbusBaseServer.hpp>
#include <ModbusFrame.hpp>

int main(void)
{
	ModbusRtuServer mRtuServer;
	mRtuServer.data.writeCoil(0, 1);
	mRtuServer.data.writeCoil(1, 0);
	mRtuServer.data.writeCoil(2, 1);
	mRtuServer.data.writeCoil(3, 0);
	mRtuServer.data.writeCoil(4, 1);
	mRtuServer.data.writeCoil(5, 0);
	mRtuServer.data.writeCoil(6, 1);
	mRtuServer.data.writeCoil(7, 0);

	std::array<uint8_t, 256> request = {6, 1, 0, 0, 0, 8, 0, 0};
	auto res = mRtuServer.handleRequest(request);

	for (;;)
	{
	}
}
