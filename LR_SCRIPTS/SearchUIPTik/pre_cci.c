# 1 "f:\\gas_vybory\\lr_scripts\\searchuiptik\\\\combined_SearchUIPTik.c"
# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "f:\\gas_vybory\\lr_scripts\\searchuiptik\\\\combined_SearchUIPTik.c" 2

# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "f:\\gas_vybory\\lr_scripts\\searchuiptik\\\\combined_SearchUIPTik.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "f:\\gas_vybory\\lr_scripts\\searchuiptik\\\\combined_SearchUIPTik.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	return 0;
}
# 4 "f:\\gas_vybory\\lr_scripts\\searchuiptik\\\\combined_SearchUIPTik.c" 2

# 1 "SearchUIPTik.c" 1
SearchUIPTik()
{
	int indexUIP = 1;

	web_add_header("Upgrade-Insecure-Requests", "1");

	web_url("{URL}", 
		"URL=http://{URL}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/runtime-es2015.js", "ENDITEM", 
		"Url=/polyfills-es2015.js", "ENDITEM", 
		"Url=/styles-es2015.js", "ENDITEM", 
		"Url=/vendor-es2015.js", "ENDITEM", 
		"Url=/main-es2015.js", "ENDITEM", 
		"Url=/assets/fonts/PTSans-Regular.ttf", "ENDITEM", 
		"Url=/assets/icons/utility-sprite/svg/symbols.svg", "ENDITEM", 
		"Url=/assets/img/s-logo.svg", "ENDITEM", 
		"Url=/assets/img/side-menu-title.svg", "ENDITEM", 
		"Url=/assets/img/menu/cik-data.svg", "ENDITEM", 
		"Url=/assets/img/menu/elector-list.svg", "ENDITEM", 
		"Url=/assets/img/menu/sul.svg", "ENDITEM", 
		"Url=/assets/img/menu/mobile-uip.svg", "ENDITEM", 
		"Url=/assets/img/menu/system-log.svg", "ENDITEM", 
		"Url=/assets/img/menu/user-settings.svg", "ENDITEM", 
		"Url=/assets/img/menu/case_email.svg", "ENDITEM", 
		"Url=/assets/img/menu/upload-file.svg", "ENDITEM", 
		"Url=/assets/img/favicon.png", "ENDITEM", 
		"Url=/assets/fonts/PTSans-Bold.ttf", "ENDITEM", 
		"Url=/PTSans-Italic.ttf", "ENDITEM", 
		"LAST");

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_auto_header("Origin", "http://{URL}");


 
	web_reg_save_param_json(
		"ParamName=CorrelationParameter",
		"QueryString=$.token",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");
		
	web_reg_save_param_json(
		"ParamName=addressId",
		"QueryString=$.user.addressId",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

	web_custom_request("login", 
		"URL=http://{URL}/gas-cik-rbd/users/auth/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/login", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"username\":\"admin14\",\"password\":\"1111\"}", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("X-Auth-Token", "{CorrelationParameter}");

	web_url("elector-table", 
		"URL=http://{URL}/gas-cik-rbd/settings/elector-table", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("gender", 
		"URL=http://{URL}/gas-cik-rbd/nsi/gender", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("capacity", 
		"URL=http://{URL}/gas-cik-rbd/nsi/capacity", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("country", 
		"URL=http://{URL}/gas-cik-rbd/nsi/country", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("nsi.change_univers_type", 
		"URL=http://{URL}/gas-cik-rbd/nsi/nsi.change_univers_type", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("elector_doc_type", 
		"URL=http://{URL}/gas-cik-rbd/nsi/elector_doc_type", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("elector-attributes-types", 
		"URL=http://{URL}/gas-cik-rbd/nsi/elector-attributes-types", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("nsi.change_univers_type_2", 
		"URL=http://{URL}/gas-cik-rbd/nsi/nsi.change_univers_type", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("nsi.change_basis", 
		"URL=http://{URL}/gas-cik-rbd/nsi/nsi.change_basis", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("add-marks-search-criteria", 
		"URL=http://{URL}/gas-cik-rbd/electors/add-marks-search-criteria", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("elections", 
		"URL=http://{URL}/gas-cik-rbd/electors/elections", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("basic-options", 
		"URL=http://{URL}/gas-cik-ukd/search/basic-options", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"LAST");

	web_stop_async("ID=Poll_0", 
		"LAST");

	web_url("elector_doc_type_2", 
		"URL=http://{URL}/gas-cik-rbd/nsi/elector_doc_type", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("custom-settings", 
		"URL=http://{URL}/gas-cik-ukd/search/custom-settings", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("gender_2", 
		"URL=http://{URL}/gas-cik-rbd/nsi/gender", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("{addressId}", 
		"URL=http://{URL}/gas-cik-rbd/addresses/{addressId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("X-Auth-Token", "ImplicitGen=Yes", "LAST"));

	web_add_header("Origin", "http://{URL}");

	web_add_header("X-Auth-Token",  "{CorrelationParameter}");

	srand(_time32(0));
	indexUIP = rand() % 10;
	lr_save_int(indexUIP,"index");
	
	web_reg_save_param_json(
		"ParamName=changeLogId",
		"QueryString=$.content.[{index}].changeLogId",
		"NotFound=warning",
		"SEARCH_FILTERS",
		"LAST");
	
	web_reg_save_param_json(
		"ParamName=sysId",
		"QueryString=$.content.[{index}].sysId",
		"NotFound=warning",
		"SEARCH_FILTERS",
		"LAST");
	
	web_reg_save_param_json(
		"ParamName=versionDate",
		"QueryString=$.content.[{index}].versionDate",
		"NotFound=warning",
		"SEARCH_FILTERS",
		"LAST");

	web_custom_request("search", 
		"URL=http://{URL}/gas-cik-rbd/electors/search?size=10&page=1&properties=%5B%7B%22name%22:%22lastName%22,%22direction%22:%22ASC%22%7D%5D&statusFilter=ACTUAL_ONLY&isApproved=true", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=", 
		"EXTRARES", 
		"Url=/assets/icons/standard-sprite/svg/symbols.svg", "Referer=http://{URL}/elector-list?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", "ENDITEM", 
		"Url=/assets/icons/action-sprite/svg/symbols.svg", "Referer=http://{URL}/elector-list?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", "ENDITEM", 
		"LAST");
	
	lr_output_message(lr_eval_string("{sysId}"));
	lr_output_message(lr_eval_string("{index}"));

	return 0;
}
# 5 "f:\\gas_vybory\\lr_scripts\\searchuiptik\\\\combined_SearchUIPTik.c" 2

# 1 "ViewUIP.c" 1
ViewUIP()
{
	
	web_add_header("X-Auth-Token", "{CorrelationParameter}");

	web_url("{sysId}", 
		"URL=http://{URL}/gas-cik-rbd/electors/docs-for-departured/{sysId}", 
		"Resource=0", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");
	
	
	web_reg_save_param_json(
		"ParamName=changeDate",
		"QueryString=$.changeDate",
		"NotFound=warning",
		"SEARCH_FILTERS",
		"LAST");
	
	web_url("last-active", 
		"URL=http://{URL}/gas-cik-rbd/electors/{sysId}/last-active", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"LAST");
	
	lr_output_message(lr_eval_string("{changeDate}"));

	
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("version-history", 
		"URL=http://{URL}/gas-cik-rbd/electors/{sysId}/version-history", 
		"Resource=0",
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("nsi.change_basis_2", 
		"URL=http://{URL}/gas-cik-rbd/nsi/nsi.change_basis?isDeprecated=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("gender_3", 
		"URL=http://{URL}/gas-cik-rbd/nsi/gender", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("capacity_2", 
		"URL=http://{URL}/gas-cik-rbd/nsi/capacity", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("elector_doc_type_3", 
		"URL=http://{URL}/gas-cik-rbd/nsi/elector_doc_type", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("country_2", 
		"URL=http://{URL}/gas-cik-rbd/nsi/country", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("residence-kinds", 
		"URL=http://{URL}/gas-cik-rbd/nsi/residence-kinds", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("elector-kinds", 
		"URL=http://{URL}/gas-cik-rbd/nsi/elector-kinds", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("add-attributes", 
		"URL=http://{URL}/gas-cik-rbd/electors/{sysId}/add-attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("elector-attributes-types_2", 
		"URL=http://{URL}/gas-cik-rbd/nsi/elector-attributes-types", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("nsi.change_basis_3", 
		"URL=http://{URL}/gas-cik-rbd/nsi/nsi.change_basis?prevId=1&isDeprecated=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("add-attributes_2", 
		"URL=http://{URL}/gas-cik-rbd/electors/{sysId}/add-attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"LAST");
	
	return 0;
}
# 6 "f:\\gas_vybory\\lr_scripts\\searchuiptik\\\\combined_SearchUIPTik.c" 2

# 1 "ViewUIP_ChangeLog.c" 1
ViewUIP_ChangeLog()
{
	web_add_header("X-Auth-Token", "{CorrelationParameter}");

	web_url("version-history_2", 
		"URL=http://{URL}/gas-cik-rbd/electors/{sysId}/version-history", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/version-history/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_add_header("X-Auth-Token", "{CorrelationParameter}");
	
	web_url("version-difference", 
		"URL=http://{URL}/gas-cik-rbd/electors/{changeLogId}/version-difference", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/version-history/{sysId}/true/{changeLogId}?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs&isRestricted=false", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"LAST");
	
	
	return 0;
}
# 7 "f:\\gas_vybory\\lr_scripts\\searchuiptik\\\\combined_SearchUIPTik.c" 2

# 1 "EditUIP.c" 1
EditUIP()
{
	web_custom_request("validate-update", 
		"URL=http://{URL}/gas-cik-rbd/electors/validate-update", 
		"Method=PUT", 
		"Resource=0", 
		"Referer=http://{URL}/elector/3371546/true?statusFilter=ALL&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		"BodyBinary={\"electorDoc\":{\"isActual\":true,\"id\":1377647,\"sysElectorId\":3371546,\"electorDocType\":{\"id\":9,\"name\":\"\\xD0\\x9F\\xD0\\xB0\\xD1\\x81\\xD0\\xBF\\xD0\\xBE\\xD1\\x80\\xD1\\x82 \\xD0\\xB3\\xD1\\x80\\xD0\\xB0\\xD0\\xB6\\xD0\\xB4\\xD0\\xB0\\xD0\\xBD\\xD0\\xB8\\xD0\\xBD\\xD0\\xB0 \\xD0\\xA0\\xD0\\xA4\",\"isPrimary\":true,\"shortName\":\"\\xD0\\x9F\\xD0\\xB0\\xD1\\x81\\xD0\\xBF\\xD0\\xBE\\xD1\\x80\\xD1\\x82 \\xD0\\xA0\\xD0\\xA4\",\"templateSeries\":\"99 99\",\"templateNumber\":\""
		"999999\",\"docCode\":\"\",\"sortOrder\":222,\"isDefault\":true},\"electDocSeries\":\"0001\",\"electDocNumber\":\"046133\",\"issueDate\":\"2016-08-24\",\"issueSubject\":{\"id\":9,\"globalId\":86014,\"name\":\"\\xD0\\xA4\\xD0\\x9C\\xD0\\xA1 \\xD0\\xA0\\xD0\\xA4\",\"code\":null,\"subjectLevel\":{\"id\":49,\"name\":\"\\xD0\\x9F\\xD0\\xB0\\xD1\\x81\\xD0\\xBF\\xD0\\xBE\\xD1\\x80\\xD1\\x82\\xD0\\xBD\\xD1\\x8B\\xD0\\xB5 \\xD1\\x81\\xD1\\x82\\xD0\\xBE\\xD0\\xBB\\xD1\\x8B \\xD0\\x9E\\xD0\\x92\\xD0\\x94\",\""
		"isProtected\":true,\"isUnchecked\":false,\"isActive\":true,\"subjectType\":{\"id\":2,\"name\":\"\\xD0\\x9F\\xD0\\xB0\\xD1\\x81\\xD0\\xBF\\xD0\\xBE\\xD1\\x80\\xD1\\x82\\xD0\\xBD\\xD0\\xBE-\\xD0\\xB2\\xD0\\xB8\\xD0\\xB7\\xD0\\xBE\\xD0\\xB2\\xD0\\xB0\\xD1\\x8F \\xD1\\x81\\xD0\\xBB\\xD1\\x83\\xD0\\xB6\\xD0\\xB1\\xD0\\xB0 (\\xD0\\x9F\\xD0\\x92\\xD0\\xA1)\",\"isProtected\":true,\"isUnchecked\":false,\"isDoc\":true,\"startDate\":\"2020-03-04\",\"endDate\":\"2020-03-04\"},\"parent\":{\"id\":47,\"name\":\""
		"\\xD0\\x9C\\xD0\\x92\\xD0\\x94\",\"isProtected\":true,\"isUnchecked\":false,\"isActive\":true,\"subjectType\":{\"id\":2,\"name\":\"\\xD0\\x9F\\xD0\\xB0\\xD1\\x81\\xD0\\xBF\\xD0\\xBE\\xD1\\x80\\xD1\\x82\\xD0\\xBD\\xD0\\xBE-\\xD0\\xB2\\xD0\\xB8\\xD0\\xB7\\xD0\\xBE\\xD0\\xB2\\xD0\\xB0\\xD1\\x8F \\xD1\\x81\\xD0\\xBB\\xD1\\x83\\xD0\\xB6\\xD0\\xB1\\xD0\\xB0 (\\xD0\\x9F\\xD0\\x92\\xD0\\xA1)\",\"isProtected\":true,\"isUnchecked\":false,\"isDoc\":true,\"startDate\":\"2020-03-04\",\"endDate\":\"2020-03-04\""
		"},\"parent\":null}},\"municipalType\":null,\"electionLevel\":null,\"subjectType\":{\"id\":9,\"name\":\"\\xD0\\xA4\\xD0\\xB5\\xD0\\xB4\\xD0\\xB5\\xD1\\x80\\xD0\\xB0\\xD0\\xBB\\xD1\\x8C\\xD0\\xBD\\xD0\\xB0\\xD1\\x8F \\xD0\\xBC\\xD0\\xB8\\xD0\\xB3\\xD1\\x80\\xD0\\xB0\\xD1\\x86\\xD0\\xB8\\xD0\\xBE\\xD0\\xBD\\xD0\\xBD\\xD0\\xB0\\xD1\\x8F \\xD1\\x81\\xD0\\xBB\\xD1\\x83\\xD0\\xB6\\xD0\\xB1\\xD0\\xB0 (\\xD0\\xA4\\xD0\\x9C\\xD0\\xA1)\",\"isProtected\":true,\"isUnchecked\":false,\"isDoc\":true,\"startDate\""
		":\"2020-03-04\",\"endDate\":\"2020-03-04\"},\"rfId\":null,\"isActual\":true,\"isUnchecked\":false,\"isProtected\":false,\"fullName\":\"\\xD0\\x9F\\xD0\\xB0\\xD1\\x81\\xD0\\xBF\\xD0\\xBE\\xD1\\x80\\xD1\\x82\\xD0\\xBD\\xD1\\x8B\\xD0\\xB5 \\xD1\\x81\\xD1\\x82\\xD0\\xBE\\xD0\\xBB\\xD1\\x8B \\xD0\\x9E\\xD0\\x92\\xD0\\x94: \\xD0\\xA4\\xD0\\xB5\\xD0\\xB4\\xD0\\xB5\\xD1\\x80\\xD0\\xB0\\xD0\\xBB\\xD1\\x8C\\xD0\\xBD\\xD0\\xB0\\xD1\\x8F "
		"\\xD0\\xBC\\xD0\\xB8\\xD0\\xB3\\xD1\\x80\\xD0\\xB0\\xD1\\x86\\xD0\\xB8\\xD0\\xBE\\xD0\\xBD\\xD0\\xBD\\xD0\\xB0\\xD1\\x8F \\xD1\\x81\\xD0\\xBB\\xD1\\x83\\xD0\\xB6\\xD0\\xB1\\xD0\\xB0 (\\xD0\\xA4\\xD0\\x9C\\xD0\\xA1) \\xD0\\xA4\\xD0\\x9C\\xD0\\xA1 \\xD0\\xA0\\xD0\\xA4\"}},\"isActual\":true,\"id\":294132,\"sysId\":3371546,\"changeLogId\":453609,\"versionDate\":\"2000-01-01\",\"lastName\":\"\\xD0\\x90\\xD0\\xB1\\xD0\\xB0\\xD0\\xB5\\xD0\\xB2\",\"firstName\":\""
		"\\xD0\\x92\\xD0\\xBB\\xD0\\xB0\\xD0\\xB4\\xD0\\xB8\\xD0\\xBC\\xD0\\xB8\\xD1\\x80\",\"middleName\":\"\\xD0\\x9C\\xD0\\xB8\\xD1\\x85\\xD0\\xB0\\xD0\\xB9\\xD0\\xBB\\xD0\\xBE\\xD0\\xB2\\xD0\\xB8\\xD1\\x87\",\"birthDay\":\"1981-06-27\",\"isBirthdayYearOnly\":false,\"gender\":{\"id\":1,\"name\":\"\\xD0\\x9C\\xD1\\x83\\xD0\\xB6\\xD1\\x81\\xD0\\xBA\\xD0\\xBE\\xD0\\xB9\"},\"capacity\":{\"id\":1,\"name\":\""
		"\\xD0\\xB4\\xD0\\xB5\\xD0\\xB5\\xD1\\x81\\xD0\\xBF\\xD0\\xBE\\xD1\\x81\\xD0\\xBE\\xD0\\xB1\\xD0\\xB5\\xD0\\xBD\",\"isDefault\":true,\"isTrueCapacity\":true},\"sysAddressId\":null,\"birthAddress\":{\"id\":1,\"name\":\"\\xD0\\xA0\\xD0\\xBE\\xD1\\x81\\xD1\\x81\\xD0\\xB8\\xD1\\x8F\",\"addressLevel\":{\"id\":71,\"name\":\"\\xD0\\xA1\\xD1\\x82\\xD1\\x80\\xD0\\xB0\\xD0\\xBD\\xD0\\xB0\",\"isProtected\":true,\"isRoot\":true,\"addressLevelHierarchList\":[]},\"writingType\":null,\"posInAddressName\":null,\""
		"fullName\":\"\\xD0\\xA1\\xD1\\x82\\xD1\\x80\\xD0\\xB0\\xD0\\xBD\\xD0\\xB0: \\xD0\\xA0\\xD0\\xBE\\xD1\\x81\\xD1\\x81\\xD0\\xB8\\xD1\\x8F\",\"isProtected\":true,\"isUnchecked\":false,\"isDefaultCountry\":true,\"isBomzh\":false},\"country\":{\"id\":643,\"name\":\"\\xD0\\xA0\\xD0\\xBE\\xD1\\x81\\xD1\\x81\\xD0\\xB8\\xD1\\x8F\",\"isDefault\":true},\"snils\":\"08269414893\",\"inn\":null,\"electorResidence\":{\"livingAddress\":{\"id\":1205762,\"name\":\"31\",\"addressLevel\":{\"id\":17,\"name\":\""
		"\\xD0\\x9A\\xD0\\xB2\\xD0\\xB0\\xD1\\x80\\xD1\\x82\\xD0\\xB8\\xD1\\x80\\xD0\\xB0\",\"isProtected\":false,\"isRoot\":false,\"addressLevelHierarchList\":[]},\"writingType\":null,\"posInAddressName\":null,\"fullName\":\"\\xD0\\xA1\\xD1\\x82\\xD1\\x80\\xD0\\xB0\\xD0\\xBD\\xD0\\xB0: \\xD0\\xA0\\xD0\\xBE\\xD1\\x81\\xD1\\x81\\xD0\\xB8\\xD1\\x8F, \\xD0\\xA1\\xD1\\x83\\xD0\\xB1\\xD1\\x8A\\xD0\\xB5\\xD0\\xBA\\xD1\\x82 \\xD0\\xA4\\xD0\\xB5\\xD0\\xB4\\xD0\\xB5\\xD1\\x80\\xD0\\xB0\\xD1\\x86\\xD0\\xB8\\xD0\\xB8"
		": \\xD0\\xA0\\xD1\\x8F\\xD0\\xB7\\xD0\\xB0\\xD0\\xBD\\xD1\\x81\\xD0\\xBA\\xD0\\xB0\\xD1\\x8F, \\xD0\\xA0\\xD0\\xB0\\xD0\\xB9\\xD0\\xBE\\xD0\\xBD: \\xD0\\xA0\\xD1\\x8B\\xD0\\xB1\\xD0\\xBD\\xD0\\xBE\\xD0\\xB2\\xD1\\x81\\xD0\\xBA\\xD0\\xB8\\xD0\\xB9, \\xD0\\x93\\xD0\\xBE\\xD1\\x80\\xD0\\xBE\\xD0\\xB4: \\xD0\\x93\\xD0\\xBE\\xD1\\x80\\xD0\\xBE\\xD0\\xB4 \\xD0\\xA0\\xD1\\x8B\\xD0\\xB1\\xD0\\xBD\\xD0\\xBE\\xD0\\xB5, \\xD0\\xA3\\xD0\\xBB\\xD0\\xB8\\xD1\\x86\\xD0\\xB0: "
		"\\xD0\\x9F\\xD0\\xBE\\xD1\\x87\\xD1\\x82\\xD0\\xBE\\xD0\\xB2\\xD0\\xB0\\xD1\\x8F, \\xD0\\x94\\xD0\\xBE\\xD0\\xBC: 6, \\xD0\\x9A\\xD0\\xB2\\xD0\\xB0\\xD1\\x80\\xD1\\x82\\xD0\\xB8\\xD1\\x80\\xD0\\xB0: 31\",\"isProtected\":false,\"isUnchecked\":false,\"isDefaultCountry\":false,\"isBomzh\":false},\"residenceKind\":{\"id\":1,\"name\":\"\\xD0\\x9F\\xD0\\xBE\\xD1\\x81\\xD1\\x82\\xD0\\xBE\\xD1\\x8F\\xD0\\xBD\\xD0\\xBD\\xD0\\xB0\\xD1\\x8F\",\"isNeedFillRegistrationEnd\":false},\"arrivalAddress\":{\"id\":1,"
		"\"name\":\"\\xD0\\xA0\\xD0\\xBE\\xD1\\x81\\xD1\\x81\\xD0\\xB8\\xD1\\x8F\",\"addressLevel\":{\"id\":71,\"name\":\"\\xD0\\xA1\\xD1\\x82\\xD1\\x80\\xD0\\xB0\\xD0\\xBD\\xD0\\xB0\",\"isProtected\":true,\"isRoot\":true,\"addressLevelHierarchList\":[]},\"writingType\":null,\"posInAddressName\":null,\"fullName\":\"\\xD0\\xA1\\xD1\\x82\\xD1\\x80\\xD0\\xB0\\xD0\\xBD\\xD0\\xB0: \\xD0\\xA0\\xD0\\xBE\\xD1\\x81\\xD1\\x81\\xD0\\xB8\\xD1\\x8F\",\"isProtected\":true,\"isUnchecked\":false,\"isDefaultCountry\":true,"
		"\"isBomzh\":false},\"departureAddress\":null,\"isCreateArriveNeeded\":false},\"sysSubjectId\":null,\"hasActiveVersion\":true,\"versionsCount\":1,\"zagsInfo\":null,\"createDate\":\"2020-12-03\",\"changeDate\":\"2020-08-01\",\"basisChange\":{\"id\":109,\"name\":\"\\xD0\\xA3\\xD1\\x87\\xD0\\xB5\\xD1\\x82 \\xD0\\xA1\\xD0\\x9D\\xD0\\x98\\xD0\\x9B\\xD0\\xA1\",\"isProtected\":null,\"changeBasisCode\":-1,\"changeTypeFountainInform\":{\"id\":111,\"name\":\"\\xD0\\x9F\\xD0\\xA4\\xD0\\xA0\",\"subjectType\":"
		"{\"id\":120,\"name\":\"\\xD0\\x9A\\xD0\\xA1\\xD0\\x90 \\xD0\\x93\\xD0\\x90\\xD0\\xA1 \\xD0\\x92\\xD1\\x8B\\xD0\\xB1\\xD0\\xBE\\xD1\\x80\\xD1\\x8B\",\"isProtected\":true,\"isUnchecked\":false,\"isDoc\":false,\"startDate\":\"2020-03-04\",\"endDate\":\"2020-03-04\"},\"isProtected\":false,\"isUnchecked\":false,\"createDate\":\"2020-08-14\",\"changeDate\":\"2020-08-14\"},\"changeUniversType\":{\"id\":20,\"name\":\"\\xD0\\xA3\\xD1\\x87\\xD0\\xB5\\xD1\\x82 "
		"\\xD0\\xA1\\xD0\\x9D\\xD0\\x98\\xD0\\x9B\\xD0\\xA1\",\"isPrimaryEvent\":false,\"isPrimaryEventMb\":false,\"isFictionEvent\":false,\"isQuestionEvent\":false,\"isCapacityCheckNeeded\":false,\"isDepartureFilter\":false,\"createDate\":\"2020-08-14\",\"changeDate\":\"2020-08-14\",\"isArriveFilter\":false,\"isDeprecated\":null,\"orderNum\":null},\"changeDateLabelName\":\"\\xD0\\x94\\xD0\\xB0\\xD1\\x82\\xD0\\xB0 \\xD1\\x81\\xD0\\xBE\\xD0\\xB1\\xD1\\x8B\\xD1\\x82\\xD0\\xB8\\xD1\\x8F\",\""
		"isDefaultDeleteBasis\":false,\"primaryBasis\":false,\"orderNum\":null,\"isDefaultDeathZagsImport\":false,\"isCorrectionBasis\":false,\"isNameChangeFromZagsImport\":false,\"isBirthFromZagsImport\":false,\"isDefaultDepartureBasis\":false,\"isDeathFromZags\":false,\"fieldEnablingCapacity\":null,\"isDefaultArrivalBasisMilitary\":false,\"fieldEnabling\":{\"allEnabled\":false,\"enable\":[\"snils\"],\"changeRequired\":[{\"error\":\"\\xD0\\x9F\\xD0\\xBE\\xD0\\xBB\\xD0\\xB5 "
		"\\xD0\\xA1\\xD0\\x9D\\xD0\\x98\\xD0\\x9B\\xD0\\xA1 \\xD0\\xBE\\xD0\\xB1\\xD1\\x8F\\xD0\\xB7\\xD0\\xB0\\xD1\\x82\\xD0\\xB5\\xD0\\xBB\\xD1\\x8C\\xD0\\xBD\\xD0\\xBE \\xD0\\xB4\\xD0\\xBB\\xD1\\x8F \\xD0\\xB7\\xD0\\xB0\\xD0\\xBF\\xD0\\xBE\\xD0\\xBB\\xD0\\xBD\\xD0\\xB5\\xD0\\xBD\\xD0\\xB8\\xD1\\x8F / \\xD0\\xB8\\xD0\\xB7\\xD0\\xBC\\xD0\\xB5\\xD0\\xBD\\xD0\\xB5\\xD0\\xBD\\xD0\\xB8\\xD1\\x8F\",\"fields\":[\"snils\"],\"ruleType\":\"AllOfThem\"}],\"ifChanged\":[]}},\"universeChange\":{\"id\":0,\"name\":\""
		"\\xD0\\x90\\xD0\\xBA\\xD1\\x82\\xD1\\x83\\xD0\\xB0\\xD0\\xBB\\xD1\\x8C\\xD0\\xBD\\xD1\\x8B\\xD0\\xB9 \\xD1\\x81\\xD1\\x80\\xD0\\xB5\\xD0\\xB7\",\"isPrimaryEvent\":true,\"isPrimaryEventMb\":true,\"isFictionEvent\":false,\"isQuestionEvent\":false,\"isCapacityCheckNeeded\":false,\"isDepartureFilter\":false,\"createDate\":\"2020-05-22\",\"changeDate\":\"2020-05-22\",\"isArriveFilter\":false,\"isDeprecated\":null,\"orderNum\":10},\"attrAdditionalEducation\":null,\"commerce\":null,\"disability\":null,\""
		"education\":null,\"entity\":null,\"liability\":null,\"money\":null,\"otherCitizen\":null,\"otherStock\":null,\"penalties\":null,\"phoneEmail\":null,\"photo\":null,\"sourceRevenue\":null,\"status\":{\"id\":\"active\",\"name\":\"\\xD0\\x90\\xD0\\xBA\\xD1\\x82\\xD1\\x83\\xD0\\xB0\\xD0\\xBB\\xD0\\xB5\\xD0\\xBD\"},\"editable\":true,\"isApproved\":true,\"capacityActualDate\":\"1981-06-27\",\"canBeDeletedByUser\":true,\"electorKindList\":[{\"id\":1,\"name\":\""
		"\\xD0\\xB8\\xD0\\xB7\\xD0\\xB1\\xD0\\xB8\\xD1\\x80\\xD0\\xB0\\xD1\\x82\\xD0\\xB5\\xD0\\xBB\\xD1\\x8C\"}]}", 
		"LAST");

	web_custom_request("validate-add-attributes", 
		"URL=http://{URL}/gas-cik-rbd/electors/{sysId}/validate-add-attributes", 
		"Method=POST", 
		"Resource=0", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ALL&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[]", 
		"LAST");
	
	return 0;
}
# 8 "f:\\gas_vybory\\lr_scripts\\searchuiptik\\\\combined_SearchUIPTik.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
 
 
 
 
 
 
 
	return 0;
}
# 9 "f:\\gas_vybory\\lr_scripts\\searchuiptik\\\\combined_SearchUIPTik.c" 2

