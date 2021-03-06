/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ICNoteFileFormat : NSObject
+(id)pathExtension;
+(id)fileUTType;
+(BOOL)importNoteFromURL:(id)arg1 toNote:(id)arg2 error:(id*)arg3 ;
+(void)exportNote:(id)arg1 toURL:(id)arg2 ;
-(id)allowedFileTypes;
-(BOOL)canHandleFileURL:(id)arg1 ;
-(void)cancelParsing;
-(void)parseFileURL:(id)arg1 newNoteBlock:(/*^block*/id)arg2 updatedNoteBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 completedParsingBlock:(/*^block*/id)arg5 ;
-(void)totalNotesFoundAtFileURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

