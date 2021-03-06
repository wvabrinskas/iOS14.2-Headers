/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ENNoteRef, ENNotebook, NSString, NSDate;

@interface ENSessionFindNotesResult : NSObject {

	BOOL _hasResources;
	int _updateSequenceNum;
	ENNoteRef* _noteRef;
	ENNotebook* _notebook;
	NSString* _title;
	NSDate* _created;
	NSDate* _updated;

}

@property (assign,nonatomic) int updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) ENNoteRef * noteRef;                //@synthesize noteRef=_noteRef - In the implementation block
@property (nonatomic,retain) ENNotebook * notebook;              //@synthesize notebook=_notebook - In the implementation block
@property (nonatomic,retain) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDate * created;                   //@synthesize created=_created - In the implementation block
@property (nonatomic,retain) NSDate * updated;                   //@synthesize updated=_updated - In the implementation block
@property (assign,nonatomic) BOOL hasResources;                  //@synthesize hasResources=_hasResources - In the implementation block
-(NSDate *)created;
-(NSDate *)updated;
-(id)description;
-(NSString *)title;
-(void)setCreated:(NSDate *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(ENNoteRef *)noteRef;
-(void)setUpdated:(NSDate *)arg1 ;
-(BOOL)hasResources;
-(int)updateSequenceNum;
-(void)setUpdateSequenceNum:(int)arg1 ;
-(ENNotebook *)notebook;
-(void)setNotebook:(ENNotebook *)arg1 ;
-(void)setNoteRef:(ENNoteRef *)arg1 ;
-(void)setHasResources:(BOOL)arg1 ;
@end

