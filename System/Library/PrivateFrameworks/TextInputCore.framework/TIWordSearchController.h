/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMapTable;

@interface TIWordSearchController : NSObject {

	NSMapTable* _inputModeToWordSearchMapping;

}

@property (nonatomic,retain) NSMapTable * inputModeToWordSearchMapping;              //@synthesize inputModeToWordSearchMapping=_inputModeToWordSearchMapping - In the implementation block
+(id)sharedWordSearchController;
-(id)init;
-(void)setWordSearch:(id)arg1 forInputMode:(id)arg2 ;
-(id)wordSearchForInputMode:(id)arg1 ;
-(NSMapTable *)inputModeToWordSearchMapping;
-(void)setInputModeToWordSearchMapping:(NSMapTable *)arg1 ;
@end
