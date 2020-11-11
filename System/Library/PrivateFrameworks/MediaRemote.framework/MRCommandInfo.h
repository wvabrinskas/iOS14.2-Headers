/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, _MRCommandInfoProtobuf, NSData;

@interface MRCommandInfo : NSObject {

	BOOL _enabled;
	unsigned _command;
	NSDictionary* _options;

}

@property (nonatomic,readonly) _MRCommandInfoProtobuf * protobuf; 
@property (assign,nonatomic) unsigned command;                                            //@synthesize command=_command - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                        //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSData * propertyListData; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)isCommandActuallySupportedEvenWhenDisabled:(unsigned)arg1 ;
+(id)dataFromCommandInfos:(id)arg1 ;
+(id)commandInfosFromData:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(unsigned long long)hash;
-(unsigned)command;
-(void)setEnabled:(BOOL)arg1 ;
-(NSDictionary *)options;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithPropertyListData:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)data;
-(_MRCommandInfoProtobuf *)protobuf;
-(id)initWithData:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)isEnabled;
-(NSData *)propertyListData;
-(void)setCommand:(unsigned)arg1 ;
@end
