/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/s1ap-15.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/GENERATED_S1AP`
 */

#ifndef	_S1AP_CellAccessMode_H_
#define	_S1AP_CellAccessMode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_CellAccessMode {
	S1AP_CellAccessMode_hybrid	= 0
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_CellAccessMode;

/* S1AP_CellAccessMode */
typedef long	 S1AP_CellAccessMode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_CellAccessMode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_CellAccessMode;
extern const asn_INTEGER_specifics_t asn_SPC_CellAccessMode_specs_1;
asn_struct_free_f CellAccessMode_free;
asn_struct_print_f CellAccessMode_print;
asn_constr_check_f CellAccessMode_constraint;
ber_type_decoder_f CellAccessMode_decode_ber;
der_type_encoder_f CellAccessMode_encode_der;
xer_type_decoder_f CellAccessMode_decode_xer;
xer_type_encoder_f CellAccessMode_encode_xer;
per_type_decoder_f CellAccessMode_decode_uper;
per_type_encoder_f CellAccessMode_encode_uper;
per_type_decoder_f CellAccessMode_decode_aper;
per_type_encoder_f CellAccessMode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_CellAccessMode_H_ */
#include <asn_internal.h>