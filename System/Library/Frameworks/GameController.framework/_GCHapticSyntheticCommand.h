/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GameController/GameController-Structs.h>
@class _GCHapticParameterCurve, _GCHapticTokenAndParams;

@interface _GCHapticSyntheticCommand : NSObject {

	unsigned short _type;
	double _time;
	unsigned long long _channelOrSeqID;
	unsigned long long _identifier;
	float _value;
	unsigned long long _serverID;
	_GCHapticParameterCurve* _parameterCurve;
	_GCHapticTokenAndParams* _tokenAndParams;

}

@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) double time; 
@property (nonatomic,readonly) unsigned long long channelID; 
@property (nonatomic,readonly) unsigned long long sequenceID; 
@property (nonatomic,readonly) unsigned long long eventID; 
@property (nonatomic,readonly) unsigned long long paramID; 
@property (nonatomic,readonly) unsigned long long serverID;                           //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,readonly) unsigned short command; 
@property (nonatomic,readonly) float value;                                           //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) _GCHapticParameterCurve * parameterCurve;              //@synthesize parameterCurve=_parameterCurve - In the implementation block
@property (nonatomic,readonly) _GCHapticTokenAndParams * tokenAndParams;              //@synthesize tokenAndParams=_tokenAndParams - In the implementation block
-(unsigned long long)channelID;
-(unsigned short)command;
-(unsigned long long)sequenceID;
-(id)description;
-(unsigned short)type;
-(float)value;
-(double)time;
-(unsigned long long)serverID;
-(unsigned long long)paramID;
-(unsigned long long)eventID;
-(void)cancel;
-(_GCHapticParameterCurve *)parameterCurve;
-(void)preprocessCommand:(const HapticCommand*)arg1 ;
-(id)initWithHapticCommand:(const HapticCommand*)arg1 ;
-(_GCHapticTokenAndParams *)tokenAndParams;
@end

