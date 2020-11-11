/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaServices/MSVLyricsTextElement.h>

@class MSVLyricsLine;

@interface MSVLyricsWord : MSVLyricsTextElement {

	MSVLyricsLine* _parentLine;
	MSVLyricsWord* _nextWord;

}

@property (nonatomic,retain) MSVLyricsLine * parentLine;              //@synthesize parentLine=_parentLine - In the implementation block
@property (nonatomic,retain) MSVLyricsWord * nextWord;                //@synthesize nextWord=_nextWord - In the implementation block
-(id)init;
-(MSVLyricsWord *)nextWord;
-(void)setParentLine:(MSVLyricsLine *)arg1 ;
-(MSVLyricsLine *)parentLine;
-(void)setNextWord:(MSVLyricsWord *)arg1 ;
@end
