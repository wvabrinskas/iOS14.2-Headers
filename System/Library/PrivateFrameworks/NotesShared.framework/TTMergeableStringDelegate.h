/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TTMergeableStringDelegate <NSObject>
@required
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3;
-(BOOL)wantsUndoCommands;
-(void)addUndoCommand:(id)arg1;
-(void)endEditing;
-(void)beginEditing;

@end

