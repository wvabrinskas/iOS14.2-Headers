/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableArray;

@interface NSISPlaybackOperation : NSObject {

	NSMutableDictionary* oldIdentsToNewVariables;
	NSMutableArray* variableDelegates;

}
-(id)init;
-(void)_addToEngine:(id)arg1 ;
-(id)unwrapVariable:(id)arg1 ;
-(id)unwrapLinearExpression:(id)arg1 onEngine:(id)arg2 ;
-(void)playbackOneAction:(id)arg1 onEngine:(id)arg2 ;
-(void)dealloc;
@end
