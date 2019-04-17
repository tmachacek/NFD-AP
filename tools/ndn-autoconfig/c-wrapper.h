#ifndef C_WRAPPER_H
#define C_WRAPPER_H

//This wrapper calls the main function of the client

#ifdef __cplusplus
extern "C" {
#endif
	typedef struct InvokeClient InvokeClient;

	InvokeClient* newInvokeClient();

	const char*
	InvokeClient_Auto_Discovery(InvokeClient* v, char* p_interface_name);

#ifdef __cplusplus
}
#endif

#endif //C_WRAPPER_H

