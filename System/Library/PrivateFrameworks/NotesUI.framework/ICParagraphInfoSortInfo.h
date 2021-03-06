/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NotesUI/NotesUI-Structs.h>
@class ICTrackedParagraph, NSAttributedString;

@interface ICParagraphInfoSortInfo : NSObject {

	ICTrackedParagraph* _trackedParagraph;
	NSAttributedString* _attributedString;
	NSRange _characterRange;

}

@property (nonatomic,retain) ICTrackedParagraph * trackedParagraph;              //@synthesize trackedParagraph=_trackedParagraph - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic) NSRange characterRange;                             //@synthesize characterRange=_characterRange - In the implementation block
-(NSAttributedString *)attributedString;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSRange)characterRange;
-(void)setCharacterRange:(NSRange)arg1 ;
-(void)setTrackedParagraph:(ICTrackedParagraph *)arg1 ;
-(ICTrackedParagraph *)trackedParagraph;
@end

