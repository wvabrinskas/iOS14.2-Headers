/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardState, TIKeyboardConfiguration;

@interface TITypologyRecordPhraseBoundaryAdjustment : TITypologyRecord {

	BOOL _forwardAdjustment;
	int _granularity;
	TIKeyboardState* _keyboardState;
	TIKeyboardConfiguration* _keyboardConfig;

}

@property (assign,nonatomic) BOOL forwardAdjustment;                                //@synthesize forwardAdjustment=_forwardAdjustment - In the implementation block
@property (assign,nonatomic) int granularity;                                       //@synthesize granularity=_granularity - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;                       //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIKeyboardConfiguration * keyboardConfig;              //@synthesize keyboardConfig=_keyboardConfig - In the implementation block
+(BOOL)supportsSecureCoding;
-(TIKeyboardConfiguration *)keyboardConfig;
-(void)encodeWithCoder:(id)arg1 ;
-(void)replaceDocumentState:(id)arg1 ;
-(BOOL)forwardAdjustment;
-(void)setForwardAdjustment:(BOOL)arg1 ;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(void)applyToStatistic:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeContextFromKeyboardState;
-(id)currentKeyboardState;
-(int)granularity;
-(TIKeyboardState *)keyboardState;
-(void)setKeyboardConfig:(TIKeyboardConfiguration *)arg1 ;
-(id)shortDescription;
-(void)setGranularity:(int)arg1 ;
@end
