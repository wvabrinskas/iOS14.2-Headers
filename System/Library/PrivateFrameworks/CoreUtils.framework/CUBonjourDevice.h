/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, NSString, NSDictionary, NSData;

@interface CUBonjourDevice : NSObject {

	unsigned char _deviceIDBytes[6];
	NSUUID* _identifier;
	NSString* _model;
	NSString* _name;
	NSString* _serviceType;
	NSDictionary* _txtDictionary;
	NSData* _txtData;
	NSDictionary* _deviceInfo;
	NSString* _identifierStr;
	NSUUID* _identifierUUID;

}

@property (nonatomic,copy) NSDictionary * deviceInfo;                          //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,copy) NSString * identifierStr;                           //@synthesize identifierStr=_identifierStr - In the implementation block
@property (nonatomic,copy) NSUUID * identifierUUID;                            //@synthesize identifierUUID=_identifierUUID - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * model;                                   //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                             //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * txtDictionary;              //@synthesize txtDictionary=_txtDictionary - In the implementation block
@property (nonatomic,copy) NSData * txtData;                                   //@synthesize txtData=_txtData - In the implementation block
-(NSString *)model;
-(void)setIdentifierUUID:(NSUUID *)arg1 ;
-(NSDictionary *)deviceInfo;
-(NSUUID *)identifierUUID;
-(id)copyConnectionStringWithFlags:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setIdentifierStr:(NSString *)arg1 ;
-(void)setDeviceInfo:(NSDictionary *)arg1 ;
-(NSUUID *)identifier;
-(NSData *)txtData;
-(NSString *)serviceType;
-(void)_updateTXTDictionary:(id)arg1 ;
-(NSDictionary *)txtDictionary;
-(id)descriptionWithLevel:(int)arg1 ;
-(NSString *)name;
-(id)description;
-(id)copyConnectionInfoWithFlags:(unsigned long long)arg1 interfaceName:(id)arg2 error:(id*)arg3 ;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSString *)identifierStr;
-(void)setTxtData:(NSData *)arg1 ;
-(unsigned)updateWithBonjourDeviceInfo:(id)arg1 ;
-(void)reconfirm;
-(id)shortDescription;
-(void)setName:(NSString *)arg1 ;
@end

