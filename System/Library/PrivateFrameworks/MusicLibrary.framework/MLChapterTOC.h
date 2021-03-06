/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface MLChapterTOC : NSObject
-(id)titlePropertyOfChapterAtIndex:(unsigned)arg1 ;
-(unsigned)countOfChapters;
-(unsigned)countOfGroupsForProperty:(int)arg1 ;
-(unsigned)timeLocationInMSOfChapterAtIndex:(unsigned)arg1 ;
-(id)urlTitlePropertyOfChapterAtIndex:(unsigned)arg1 ;
-(unsigned)chapterIndexForGroupIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)durationInMSOfGroupAtIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(id)urlPropertyOfChapterAtIndex:(unsigned)arg1 ;
-(ChapterDataRef)chapterDataRef;
-(unsigned)chapterIndexAtTimeLocationInMS:(unsigned)arg1 ;
-(unsigned)groupIndexForChapterIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)groupIndexAtTimeLocationInMS:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)timeLocationInMSOfGroupAtIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(BOOL)hasDataForProperty:(int)arg1 ;
@end

