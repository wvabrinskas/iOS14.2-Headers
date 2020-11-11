/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MCNearbyKey : NSObject {

	unsigned short _character;
	float _logLikelihood;

}

@property (nonatomic,readonly) unsigned short character;              //@synthesize character=_character - In the implementation block
@property (nonatomic,readonly) float logLikelihood;                   //@synthesize logLikelihood=_logLikelihood - In the implementation block
-(unsigned short)character;
-(float)logLikelihood;
-(id)initWithCharacter:(unsigned short)arg1 logLikelihood:(float)arg2 ;
@end
