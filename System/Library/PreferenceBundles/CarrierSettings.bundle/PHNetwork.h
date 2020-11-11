/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PreferenceBundles/CarrierSettings.bundle/CarrierSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface PHNetwork : NSObject {

	NSString* _name;
	unsigned long long _state;
	NSDictionary* _dictionaryRepresentation;

}

@property (retain) NSDictionary * dictionaryRepresentation;              //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
@property (nonatomic,retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long state;                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (readonly) NSString * code; 
+(id)networkFromDictionary:(id)arg1 ;
-(id)init;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(NSString *)code;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)state;
-(void)setDictionaryRepresentation:(NSDictionary *)arg1 ;
-(NSString *)name;
-(NSString *)displayName;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end
