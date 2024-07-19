/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.s1;

import javax.servlet.http.*;
import java.io.*;
import javax.servlet.*;
/**
 *
 * @author ADMIN
 */
public class Welcomeservlet  extends HttpServlet{
    protected void processRequest(HttpServletRequest req,HttpServletResponse res) 
    throws ServletException,IOException{
        res.setContentType("text/html");
        PrintWriter pw=res.getWriter();
        String name=req.getParameter("txt1");
        pw.println("Hello"+name);
        HttpSession hs=req.getSession();
        hs.setAttribute("username",name);
        pw.println("< a href='visit'>VISIT</a>");   
    }
}
