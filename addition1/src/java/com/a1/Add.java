/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.a1;

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.*;

/**
 *
 * @author ADMIN
 */
public class Add  extends GenericServlet{

    @Override
    public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
         res.setContentType("text/html");
         PrintWriter pw=res.getWriter();
         int a,b;
         a=Integer.parseInt(req.getParameter("txt1"));
         b=Integer.parseInt(req.getParameter("txt2"));
         pw.println("Summation is : "+(a+b));
    }
    
    
}
