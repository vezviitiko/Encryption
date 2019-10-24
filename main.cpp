#include "Encryption.h"

CONSOLE_APP_MAIN
{
	RDUMP("start");
	String key = "ra-ra";
	String message = "Cu-Cusdt54hb 56dh56bd4h564s56vtq4wtc4awt";
	String message_new;
	message_new = xor_coding(key, message);
	
	RDUMP(message);
	RDUMP(message_new);
	RDUMP("-------------");
	
	String message2;
	message2 = xor_coding(key, message_new);

	RDUMP(message_new);
	RDUMP(message2);
	
	RDUMP("end____1");
	
	Vector<byte> v_str = StringTovectorbyte(message);
	RDUMP(v_str);
	
	xor_coding(key, &v_str);
	RDUMP(v_str);
	RDUMP("-------------");
	
	RDUMP(v_str);
	xor_coding(key, &v_str);
	RDUMP(v_str);
}

