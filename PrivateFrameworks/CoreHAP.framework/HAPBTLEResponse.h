/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLEResponse : NSObject {
    NSMutableData * __internalBody;
    NSData * _body;
    unsigned int  _bodyLength;
    BOOL  _headerComplete;
    HAPBTLETransactionIdentifier * _identifier;
    HAPBTLERequest * _request;
    unsigned char  _statusCode;
}

@property (setter=_setInternalBody:, nonatomic, retain) NSMutableData *_internalBody;
@property (nonatomic, copy) NSData *body;
@property (getter=isBodyComplete, nonatomic, readonly) BOOL bodyComplete;
@property (nonatomic, readonly) unsigned int bodyLength;
@property (getter=isComplete, nonatomic, readonly) BOOL complete;
@property (getter=isEncrypted, nonatomic, readonly) BOOL encrypted;
@property (getter=isHeaderComplete, nonatomic) BOOL headerComplete;
@property (nonatomic, readonly) HAPBTLETransactionIdentifier *identifier;
@property (nonatomic, readonly) HAPBTLERequest *request;
@property (nonatomic, readonly) unsigned char statusCode;
@property (getter=isValid, nonatomic, readonly) BOOL valid;

- (void).cxx_destruct;
- (unsigned int)_deserializeHeaderBodyLengthWithData:(id)arg1 error:(id*)arg2;
- (unsigned int)_deserializeHeaderWithData:(id)arg1 error:(id*)arg2;
- (id)_internalBody;
- (unsigned int)_remainingBodyLength;
- (void)_setInternalBody:(id)arg1;
- (unsigned int)appendData:(id)arg1 error:(id*)arg2;
- (id)body;
- (unsigned int)bodyLength;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)identifier;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (BOOL)isBodyComplete;
- (BOOL)isComplete;
- (BOOL)isEncrypted;
- (BOOL)isHeaderComplete;
- (BOOL)isValid;
- (id)request;
- (void)setBody:(id)arg1;
- (void)setHeaderComplete:(BOOL)arg1;
- (id)shortDescription;
- (unsigned char)statusCode;

@end
