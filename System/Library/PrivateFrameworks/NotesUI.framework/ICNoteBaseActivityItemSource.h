/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIActivityItemSourceAttachment.h>

@class NSString;

@interface ICNoteBaseActivityItemSource : NSObject <UIActivityItemSourceAttachment> {

	NSString* _title;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTitle:(id)arg1 ;
-(id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
@end
